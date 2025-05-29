#include <stdio.h>
#include <Windows.h>
#include <windns.h>
#pragma comment(lib, "dnsapi.lib")

// Domain to check
PCSTR domainName = "lasagnesec.com";

int main() {

	// If the domain exists, a 0 is returned and evaluated as false
	if (DnsQuery_A(domainName, DNS_TYPE_A, DNS_OPCODE_QUERY, NULL, NULL, NULL)) {
		printf("[!] Domain '%s' is NOT registered, exiting!", domainName);
		return 1;
	}
	printf("[+] Domain '%s' is registered, continuing.", domainName);

	return 0;
}