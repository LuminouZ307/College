/*	---------------------------------------------------------------
	Nama Program	: 	Fungsi dengan pengembalian nilai
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

float luasSegitiga();

int main() {
	float X;
	X = luasSegitiga();
	cout << "Luas Segitiga: " << X;
	return 0;
}

float luasSegitiga() {
	float A, T, Luas;
	A = 7.5;
	T = 8.5;
	Luas = 0.5 * (A * T);
	return Luas;
}