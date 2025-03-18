/* 	---------------------------------------------------
	Nama Program	: 	Keluar dari Perulangan
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/
	
#include <iostream>
using namespace std;

int main() {
	int no;
	cout << "Lomba Lari: \n";
	for(no = 0; no < 10; no++) {
		cout << no << endl;
		if(no == 4) {
			continue;
		}
	}
	cout << "Nomor Peserta: " << no;
	return 0;
}