/* 	---------------------------------------------------
	Nama Program	: 	Perulangan Bertingkat
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/
	
#include <iostream>
using namespace std;

int main() {
	int A;
	A = 0;
	
	while(A <= 4) {
		for(int i = A; i <= 4; i++) {
			cout << " -*- ";
		}
		cout << endl;
		A++;
	}
	return 0;
}