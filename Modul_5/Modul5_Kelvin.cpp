/*	---------------------------------------------------------------
	Nama Program	: 	Membuat fungsi konversi suhu
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

float kelvin(float Y);

int main() {
	float suhu, A;
	cout << "Masukkan Suhu dalam Celcius: ";
	cin >> suhu;
	
	A = kelvin(suhu);
	
	cout << "Suhu Kelvin: " << A;
	return 0;
}

float kelvin(float Y) {
	
	float konversi;
	
	konversi = Y + 273.15;
	return konversi;
}