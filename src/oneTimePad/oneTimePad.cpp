#include "oneTimePad.h"

int OneTimePad::encrypt(int message, int key) {
	return message ^ key;
}

int OneTimePad::decrypt(int cypherText, int key) {
	return cypherText ^ key;
}