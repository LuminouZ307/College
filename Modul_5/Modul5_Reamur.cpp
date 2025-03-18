/*	---------------------------------------------------------------
	Nama Program	: 	Membuat fungsi konversi suhu
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

float reamur(float Y);

int main() {
	float suhu, A;
	cout << "Masukkan Suhu dalam Celcius: ";
	cin >> suhu;
	
	A = reamur(suhu);
	
	cout << "Suhu Reamur: " << A;
	return 0;
}

float reamur(float Y) {
	
	float konversi;
	
	konversi = Y * 4 / 5;
	return konversi;
}