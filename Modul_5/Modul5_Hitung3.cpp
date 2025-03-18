/*	---------------------------------------------------------------
	Nama Program	: 	Fungsi memanggil fungsi lain
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

int komputasi(int x, int y);
int tambah(int a, int b);

int main() {
	int p, q, r;
	p = 13;
	q = 7;
	r = komputasi(p, q);
	cout << "Hasil: " << r;
	return 0;
}

int komputasi(int x, int y) {
	int e;
	x = x * 2;
	y = y * 2;
	e = tambah(x, y);
	return e;
}

int tambah(int a, int b) {
	int c;
	c = a + b;
	return c;
}