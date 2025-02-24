/* ---------------------------------------------------------
Nama Program	: Penggunaan manipulator I/O
Nama			: Arif Rahman Hudaya
NPM				: 2420501046
Tanggal Buat	: 17 Februari 2025
------------------------------------------------------------*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num = 37; 
	double pi = 3.141592654;
	cout << "heksadesimal = " << hex << num << endl;
	cout << "oktet = " << oct << num << endl;
	cout << "desimal = " << dec << num << endl;
	cout << setw(8) << num << endl;
	cout << setw(8) << setfill('*') << num << endl;
	cout << "Phi = " << setprecision(10) << pi << endl;
	cout << "Angka = " << showpos << num << endl;
	return 0;
}