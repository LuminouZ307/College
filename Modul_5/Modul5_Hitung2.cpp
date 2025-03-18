/*	---------------------------------------------------------------
	Nama Program	: 	Parameter pada fungsi dengan pengembalian nilai
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

float luasSegitiga(float A, float T);

int main() {
	float X, p, q;
	cout << "Input Alas: ";
	cin >> p;
	cout << "Input Tinggi: ";
	cin >> q;
	X = luasSegitiga(p, q);
	cout << "Luas Segitiga: " << X;
	return 0;
}

float luasSegitiga(float A, float T) {
	float Luas;
	Luas = 0.5 * (A * T);
	return Luas;
}