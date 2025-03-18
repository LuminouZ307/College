#include <iostream>
#include "pustaka/operasiAritmatika.h"

using namespace std;

int main() {
	int a, b;
	cout << "Input nilai A: ";
	cin >> a;
	cout << "Input nilai B: ";
	cin >> b;
	
	cout << "Hasil A + B: " << penjumlahan(a, b) << endl;
	cout << "Hasil A -B: " << pengurangan(a, b) << endl;
	cout << "Hasil A * B: " << perkalian(a, b) << endl;
	cout << "Hasil A / B: " << pembagian(a, b) << endl;
	cout << "Hasil A % B: " << sisabagi(a, b) << endl;
	return 0;
}