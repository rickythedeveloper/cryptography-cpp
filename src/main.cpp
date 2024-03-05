#include <iostream>
#include "helloWorld/helloWorld.h"
#include "oneTimePad/oneTimePad.h"

void performOneTimePadAndPrintResult(int message, int key) {
	int cypherText = oneTimePadEncrypt(message, key);
	int decryptedMessage = oneTimePadDecrypt(cypherText, key);
	std::cout << message << ", " << key << " -> " << cypherText << " -> " << decryptedMessage << std::endl;
}

int main() {
	performOneTimePadAndPrintResult(10, 21);
	performOneTimePadAndPrintResult(5, 15);
	return 0;
}
