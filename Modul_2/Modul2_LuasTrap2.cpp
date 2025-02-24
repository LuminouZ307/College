/* ---------------------------------------------------------
Nama Program	: Penerapan Input
Nama			: Arif Rahman Hudaya
NPM				: 2420501046
Tanggal Buat	: 17 Februari 2025
------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
	float A, B, t, L;
	cout << "Input panjang atas (cm): ";
	cin >> A;
	cout << "Input panjang bawah (cm): ";
	cin >> B;
	cout << "Input tinggi (cm) ";
	cin >> t;
	L = (0.5) * (A + B) * t;
	cout << "Luas Trapesium: " << L << " cm";
	return 0;
}