/* 	---------------------------------------------------
	Nama Program	: 	Perulangan Dasar WHILE
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
	while(i < n) {
		cout << nama << endl;
		i = i + 4;
	}
	return 0;
}