/*	-----------------------------------------------------------------
	Nama Program	:	Menggunakan Standar header file CSTRING
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	17 Maret 2025
	-----------------------------------------------------------------	*/
	
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str1[25], str2[25], str3[25];
	
	cout << "Input kata ke-1: ";
	cin >> str1;
	cout << "Input kata ke-2: ";
	cin >> str2;
	cout << "Input kata ke-3: ";
	cin >> str3;
	
	if(!strcmp(str1, str2)) {
		cout << "Kata Sama";
	}
	else {
		cout << "Kata Berbeda";
	}
	return 0;
}