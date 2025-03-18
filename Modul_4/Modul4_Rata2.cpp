/* 	---------------------------------------------------
	Nama Program	: 	Deret Bilangan 2
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/

#include <iostream>
using namespace std;

int main() {
    int number = 10, 
		selisih = 2, 
		i = 0;

    while(i < 5) {
        cout << number << " ";
        number += selisih;
        selisih += 2;
        i++;
    }

    return 0;
}
