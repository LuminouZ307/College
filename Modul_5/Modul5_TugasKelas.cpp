/*	---------------------------------------------------------------
	Nama Program	: 	Tugas Kelas
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
using namespace std;

int cari_terkecil(int n);

int main() {
	
	int n, nilai_terkecil;
	cout << "Masukkan Total Data: ";
	cin >> n;
	
	nilai_terkecil = cari_terkecil(n);
	cout << "Nilai Terkecil Adalah: " << nilai_terkecil;
	return 0;
}

int cari_terkecil(int n) {
    int terkecil_tmp, num;

    cout << "Masukkan Angka ke-1: ";
    cin >> terkecil_tmp;

    for (int i = 2; i <= n; i++) {
        cout << "Masukkan Angka ke-" << i << ": ";
        cin >> num;

        if (num < terkecil_tmp) {
            terkecil_tmp = num;
        }
    }
    return terkecil_tmp;
}