/*	-----------------------------------------------------------------
	Nama Program	:	Tugas Kelas
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	17 Maret 2025
	-----------------------------------------------------------------	*/
	
#include <iostream>
#include "header/konversi.h"
using namespace std;

int main() {
    double kilobit;

    cout << "Input nilai (kilobit): ";
    cin >> kilobit;

    double word = convert_word(kilobit);
    double block = convert_block(kilobit);
    double character = convert_character(kilobit);

    cout << "Hasil konversi Storage:" << endl;
    cout << "Word      : " << word << endl;
    cout << "Block     : " << block << endl;
    cout << "Character : " << character << endl;

    return 0;
}