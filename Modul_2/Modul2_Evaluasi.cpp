#include <iostream>
using namespace std;

int main() {
	
	float A, B, C, E;
	int D, F, G;
	
	cout << "Input A: " << endl;
	cin >> A;
	
	cout << "Input B: " << endl;
	cin >> B;
	
	cout << "Input C: " << endl;
	cin >> C;
	
	cout << "Input D: " << endl;
	cin >> D;
	
	cout << "Input E: " << endl;
	cin >> E;
	
	cout << "Input F: " << endl;
	cin >> F;

	cout << "Input G: " << endl;
	cin >> G;
	
	float luas_jajargenjang = A * B;
	float luas_setengah_lingkaran = (F * 0.5) * (F * 0.5) * 3.14 * 0.5;
	float luas_trapesium = 0.5 * (G + (A - (C + D))) * F;
	float luas_persegi_panjang = E * (A - (C + D));
	
	float luas_total = luas_jajargenjang + luas_setengah_lingkaran - luas_trapesium - luas_persegi_panjang;
	
	cout << "Luas Jajar Genjang: " << luas_jajargenjang << endl;
	cout << "Luas Setengah Lingkaran: " << luas_setengah_lingkaran << endl;
	cout << "Luas Trapesium: " << luas_trapesium << endl;
	cout << "Luas Persegi Panjang: " << luas_persegi_panjang << endl;
	
	cout << "Luas Total: " << luas_total << endl;
	return 0;
}