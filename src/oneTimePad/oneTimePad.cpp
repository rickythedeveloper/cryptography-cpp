int oneTimePadEncrypt(int message, int key) {
	return message ^ key;
}

int oneTimePadDecrypt(int cypherText, int key) {
	return cypherText ^ key;
}