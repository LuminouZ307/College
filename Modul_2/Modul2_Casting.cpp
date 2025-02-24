/* ---------------------------------------------------------
Nama Program	: Casting Tipe Data
Nama			: Arif Rahman Hudaya
NPM				: 2420501046
Tanggal Buat	: 17 Februari 2025
------------------------------------------------------------*/

#include <iostream>
using namespace std;

main() {
	int jum, n;
	float rata;
	cout << "Input jumlah angka: ";
	cin >> jum;
	cout << "Input total data: ";
	cin >> n;
	rata = float (jum) / (n);
	cout << "Rata-ratanya adalah: " << rata;
	return 0;
}