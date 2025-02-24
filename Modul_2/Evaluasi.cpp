#include <iostream>

using namespace std;

int main() {
	
	float A,B,C,E;
	int D, F, G;
	cout << "Input A: ";
	cin >> A;
	
	cout << "Input B: ";
	cin >> B;	
	
	cout << "Input C: ";
	cin >> C;
	
	cout << "Input D: ";
	cin >> D;
	
	cout << "Input E: ";
	cin >> E;
	
	cout << "Input F: ";
	cin >> F;
	
	cout << "Input G: ";
	cin >> G;
	
	float luas_jajargenjang = A * B;
	float luas_trapesium = 0.5 * (G + (A - (C + D))) * F;
	float luas_setengahlingkaran = (F * 0.5) * (F * 0.5) * 3.14 * 0.5;
	float luas_persegipanjang = E * (A - (C + D));
	float luas_total = luas_jajargenjang + luas_setengahlingkaran - luas_persegipanjang - luas_trapesium;
	cout << "Luas Jajar Genjang: " << luas_jajargenjang << endl;
	cout << "Luas Trapesium: " << luas_trapesium << endl;
	cout << "Luas Setengah Lingkaran: " << luas_setengahlingkaran << endl;
	cout << "Luas Persegi Panjang: " << luas_persegipanjang << endl; 
	cout << "Luas Total: " << luas_total << " m^2" << endl;
	
	
	return 0;
}