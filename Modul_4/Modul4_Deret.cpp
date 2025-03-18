/* 	---------------------------------------------------
	Nama Program	: 	Deret Bilangan
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Input awal: ";
    cin >> a;
    cout << "Input akhir: ";
    cin >> b;
    
    for(int i = b; i >= a; i -= 2) {
        cout << i << " ";
    }
    return 0;
}