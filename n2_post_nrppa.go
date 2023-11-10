package main

import (
	"context"
	"crypto/tls"
	"encoding/hex"
	"fmt"
	"io"
	"net"
	"net/http"
	"strings"

	"golang.org/x/net/http2"
)

func main() {
	// To imitate --http2-prior-knowledge
	client := http.Client{
		Transport: &http2.Transport{
			// So http2.Transport doesn't complain the URL scheme isn't 'https'
			AllowHTTP: true,
			// Pretend we are dialing a TLS endpoint. (Note, we ignore the passed tls.Config)
			DialTLSContext: func(ctx context.Context, network, addr string, cfg *tls.Config) (net.Conn, error) {
				var d net.Dialer
				return d.DialContext(ctx, network, addr)
			},
		},
	}

	CURL_MIME_BOUNDARY := "----Boundary"
	boundary := CURL_MIME_BOUNDARY
	CRLF := "\r\n"
	json_format := "application/json"

	json_part := `{ "n2Information":{
		"n2InformationClass": "NRPPa",
		"nrppaInfo": {
			"nfId": "0",
			"nrppaPdu": {
				"ngapData": {
					"contentId": "n2msg"
				}
			}
		}
	}
	}`
	N1_MSG_HEX := ""
	N2_MSG_HEX := "00 09 00 02 00 00"
	N2_MSG_HEX = strings.Replace(N2_MSG_HEX, " ", "", -1)
	n2MsgBytes, err := hex.DecodeString(N2_MSG_HEX)
	if err != nil {
		panic(err)
	}
	N2_MSG_HEX = string(n2MsgBytes)

	var sb strings.Builder
	sb.WriteString("--" + boundary + CRLF)
	sb.WriteString("Content-Type: " + json_format + CRLF)
	sb.WriteString(CRLF)
	sb.WriteString(json_part + CRLF)

	sb.WriteString("--" + boundary + CRLF)
	sb.WriteString("Content-Type: application/vnd.3gpp.5gnas" + CRLF + "Content-Id: n1SmMsg" + CRLF)
	sb.WriteString(CRLF)
	sb.WriteString(N1_MSG_HEX + CRLF)
	sb.WriteString("--" + boundary + CRLF)
	sb.WriteString("Content-Type: application/vnd.3gpp.ngap" + CRLF + "Content-Id: n2msg" + CRLF)
	sb.WriteString(CRLF)
	sb.WriteString(N2_MSG_HEX + CRLF)
	sb.WriteString("--" + boundary + "--" + CRLF)
	// sb.WriteString("\0")

	req, err := http.NewRequest("POST", "http://192.168.70.132:8080/namf-comm/v1/non-ue-n2-messages/transfer", strings.NewReader(sb.String()))
	if err != nil {
		fmt.Println(err)
	}
	// Unnessesary header
	req.Header.Set("Accept", "application/json")
	// Headers
	req.Header.Set("Content-Type", "application/json")

	resp, err := client.Do(req)
	if err != nil {
		panic(err)
	}
	fmt.Println(resp)
	defer resp.Body.Close()

	body, err := io.ReadAll(resp.Body)
	if err != nil {
		panic(err)
	}
	fmt.Println(string(body))
}
