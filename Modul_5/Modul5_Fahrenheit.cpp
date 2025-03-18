/*	---------------------------------------------------------------
	Nama Program	: 	Membuat fungsi konversi suhu
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

float fahrenheit(float Y);

int main() {
	float suhu, A;
	cout << "Masukkan Suhu dalam Celcius: ";
	cin >> suhu;
	
	A = fahrenheit(suhu);
	
	cout << "Suhu Fahrenheit: " << A;
	return 0;
}

float fahrenheit(float Y) {
	
	float konversi;
	
	konversi = (Y * (9/5)) + 32;
	return konversi;
}