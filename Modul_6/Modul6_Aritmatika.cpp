/*	-----------------------------------------------------------------
	Nama Program	:	Membuat sendiri Header File
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	17 Maret 2025
	-----------------------------------------------------------------	*/
	
#include <iostream>
#include "header/aritmatika.h"

using namespace std;
int main() {
	int a, b;
	cout << "Input nilai A: ";
	cin >> a;
	cout << "Input nilai B: ";
	cin >> b;
	
	cout << "Hasil A + B: " << penjumlahan(a, b) << endl;
	cout << "Hasil A - B: " << pengurangan(a, b) << endl;
	cout << "Hasil A * B: " << perkalian(a, b) << endl;
	cout << "Hasil A / B: " << pembagian(a, b) << endl;
	cout << "Hasil A % B: " << sisabagi(a, b) << endl;
	return 0;
}