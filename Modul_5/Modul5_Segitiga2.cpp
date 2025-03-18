/*	---------------------------------------------------------------
	Nama Program	: 	Parameter pada fungsi tanpa pengembalian nilai
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

void luasSegitiga(float A, float T);

int main() {
	float p, q;
	cout << "Input Alas: ";
	cin >> p;
	cout << "Input Tinggi: ";
	cin >> q;
	
	luasSegitiga(p, q);
	return 0;
}

void luasSegitiga(float A, float T) {
	float Luas;
	Luas = 0.5 * (A * T);
	cout << "Luas Segitiga: " << Luas;
}