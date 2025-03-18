/*	---------------------------------------------------------------
	Nama Program	: 	Membuat fungsi menukar angka
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

void tukar(float X, float Y);

int main() {
	
	float bil1, bil2;
	cout << "Input Bil1: ";
	cin >> bil1;
	cout << "Input Bil2: ";
	cin >> bil2;
	
	tukar(bil1, bil2);
	return 0;
}

void tukar(float X, float Y) {
	float Z;
	
	Z = X;
	X = Y;
	Y = Z;
	
	cout << "Bil1- " << X << " dan Bil2- " << Y;
}

