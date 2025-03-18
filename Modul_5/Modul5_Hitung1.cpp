/*	---------------------------------------------------------------
	Nama Program	: 	Penanganan output dari dua fungsi berbeda
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

int penjumlahan(int X, int Y);
int pengurangan(int X, int Y);

int main() {
	int A, B, outA, outB, hasil;
	cout << "Input Nilai 1: ";
	cin >> A;
	cout << "Input Nilai 2: ";
	cin >> B;
	outA = penjumlahan(A, B);
	outB = pengurangan(A, B);
	hasil = outA * outB;
	cout << "Hasil Perhitungan = " << hasil;
	return 0;
}

int penjumlahan(int X, int Y) {
	int Z;
	Z = X + Y;
	return Z;
}

int pengurangan(int X, int Y) {
	int W;
	W = X - Y;
	return W;
}
	
