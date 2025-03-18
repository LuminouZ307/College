/* 	---------------------------------------------------
	Nama Program	: 	Perulangan Tak Menentu
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char kode;
    int jumA = 0, jumB = 0, i = 1, j = 1;
    bool ulang = true;

    while (ulang == true) {
        cout << "A. Arduino" << endl;
        cout << "B. ATmega16" << endl;
        cout << "X. Keluar" << endl;
        cout << "Pilih kode [A/B/X] = ";
        cin >> kode;

        if (toupper(kode) == 'A') {
            jumA += 85000;
            cout << "Arduino ke-" << i << ": " << jumA << endl;
            i++;
        } 
        else if (toupper(kode) == 'B') { 
            jumB += 50000;
            cout << "ATmega16 ke-" << j << ": " << jumB << endl;
            j++;
        } 
        else if (toupper(kode) == 'X') { 
            ulang = false;
        } 
        else { 
            cout << "Kode salah! pilih kode lain" << endl;
        }

        cout << endl;
    }

    return 0;
}
