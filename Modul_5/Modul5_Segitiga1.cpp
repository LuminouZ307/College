/*	---------------------------------------------------------------
	Nama Program	: 	Fungsi tanpa pengembalian nilai
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

void luasSegitiga();

int main() {
	luasSegitiga();
	luasSegitiga();
	return 0;
}

void luasSegitiga() {
	float A, T, Luas;
	A = 5.5;
	T = 4.5;
	Luas = 0.5 * (A * T);
	cout << "Luas Segitiga: " << Luas;
}

