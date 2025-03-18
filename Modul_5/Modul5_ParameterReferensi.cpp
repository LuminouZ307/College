/*	---------------------------------------------------------------
	Nama Program	: 	Melewati parameter referensi
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

float hitungLuas(float p, float l);
void inputData(float& p, float& l);
void cetakData(float p, float l, float hsl);

int main() {
	float panjang, lebar, luas;
	inputData(panjang, lebar);
	luas = hitungLuas(panjang, lebar);
	cetakData(panjang, lebar, luas);
	return 0;
}

float hitungLuas(float p, float l) {
	float luas;
	luas = p * l;
	return luas;
}

void inputData(float& p, float& l) {
	cout << "Input Panjang = ";
	cin >> p;
	cout << "Input Lebar = ";
	cin >> l;
}

void cetakData(float p, float l, float hsl) {
	cout << "Panjang = " << p << endl;
	cout << "Lebar = " << l << endl;
	cout << "Luas = " << hsl << endl;
}