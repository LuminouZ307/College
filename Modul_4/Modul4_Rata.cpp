/* 	---------------------------------------------------
	Nama Program	: 	Rata Rata
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/

#include <iostream>
using namespace std;

int main() {
	float nilai, rata;
	int i, n, jum;
	
	i = 1;
	jum = 0;
	
	cout << "Input Total Data: ";
	cin >> n;
	
	while(i <= n) {
		cout << "Input nilai ke " << i << ":";
		cin >> nilai;
		
		jum += nilai;
		i++;
	}
	
	rata = jum / n;
	cout << "Jumlah: " << jum << "\nRata-rata: " << rata;
	return 0;
}