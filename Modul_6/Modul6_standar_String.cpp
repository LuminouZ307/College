/*	-----------------------------------------------------------------
	Nama Program	:	Menggunakan Standar header file STRING
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	17 Maret 2025
	-----------------------------------------------------------------	*/
	
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2, str3;
	cout << "Input kata ke-1: ";
	getline(cin, str1);
	cout << "Input kata ke-2: ";
	getline(cin, str2);
	cout << "Input kata ke-3: ";
	getline(cin, str3);
	
	if(str1 == str2) {
		cout << "Kata Sama";
	}
	else {
		cout << "Kata Beda";
	}
	return 0;
}