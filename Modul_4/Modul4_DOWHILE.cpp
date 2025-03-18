/* 	---------------------------------------------------
	Nama Program	: 	Perulangan Dasar DO WHILE
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/

#include <iostream>
using namespace std;

int main() {
	char nama[15];
	int i = 10, n = 10;
	
	cout << "Input nama: ";
	cin >> nama;

	do {
		cout << nama << endl;
		i = i + 4;
	}
	while (i < n);
	return 0;
}