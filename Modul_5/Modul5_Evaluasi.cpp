/*----------------------------------------------------
	Nama Program	: Evaluasi No 2
	Mahasiswa		: Arif Rahman Hudaya
	NPM				: 2420501046
	Tanggal Buat	: 10 Maret 2025
	------------------------------------------------ */

#include<iostream>
using namespace std;

// Deklarasi fungsi
double LuasJajarGenjang(double A, double B);
double LuasPersegiPanjang(double A, double C, double D, double E);
double LuasTrapesium(double A, double C, double D, double F, double G);
double LuasSetengahLingkaran(double F);

int main(){
	double A, B, C, D, E, F, G, L, outA, outB, outC, outD;
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
	
	outA = LuasJajarGenjang(A, B);
	outB = LuasPersegiPanjang(A, C, D, E);
	outC = LuasTrapesium(A, C, D, F, G);
	outD = LuasSetengahLingkaran(F);
	
	L = outA + outD - outB - outC;
	
	cout << "Total Luas Tanah = " << L << "m2" << endl;
	return 0;
}

double LuasJajarGenjang(double A, double B) {
	return A * B;
}

double LuasPersegiPanjang(double A, double C, double D, double E) {
	return (A - (C + D)) * E;
}

double LuasTrapesium(double A, double C, double D, double F, double G) {
	return 0.5 * (G +  (A - (C + D))) * F;
}

double LuasSetengahLingkaran(double F) {
	return (F * 0.5) * (F * 0.5) * 3.14 * 0.5;
}