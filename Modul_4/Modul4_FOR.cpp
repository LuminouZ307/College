/* 	---------------------------------------------------
	Nama Program	: 	Perulangan Dasar For
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/

#include <iostream>
using namespace std;

int main() {
	char nama[15];
	int i = 0, n = 10;
	
	cout << "Input nama: ";
	cin >> nama;

	for(i = 10; i < n; i = i + 4) {
		cout << nama << endl;
	}
	return 0;
}