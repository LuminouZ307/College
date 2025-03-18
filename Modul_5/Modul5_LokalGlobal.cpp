/*	---------------------------------------------------------------
	Nama Program	: 	Variable lokal dan global
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

void cetakUmur();
int umur;

int main() {
	umur = 20;
	cetakUmur();
	return 0;
}

void cetakUmur() {
	cout << "Umur = " << umur << endl;
}