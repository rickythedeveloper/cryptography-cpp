#include <iostream>
#include "oneTimePad/oneTimePad.h"

void performOneTimePadAndPrintResult(int message, int key) {
	OneTimePad oneTimePad;
	int cypherText = oneTimePad.encrypt(message, key);
	int decryptedMessage = oneTimePad.decrypt(cypherText, key);
	std::cout << message << ", " << key << " -> " << cypherText << " -> " << decryptedMessage << std::endl;
}

int main() {
	performOneTimePadAndPrintResult(10, 21);
	performOneTimePadAndPrintResult(5, 15);
}
