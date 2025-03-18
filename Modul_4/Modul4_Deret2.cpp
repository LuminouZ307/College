/* 	---------------------------------------------------
	Nama Program	: 	Deret Bilangan 2
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/
	
#include <iostream>
using namespace std;

int main() {
    int angka = 10;
    int selisih = 2;

    for (int i = 0; i < 5; i++) {
        cout << angka << " ";
        angka += selisih;
        selisih += 2; 
    }

    return 0;
}