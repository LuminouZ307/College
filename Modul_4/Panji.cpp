/*----------------------------------------------------
	Nama Program	: Evaluasi No 2
	Mahasiswa		: Ramadan Panji Saputra
	NPM				: 2420501050
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
	// Deklarasi menangani input data
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
	
	// Memanggil fungsi luas masing-masing bidang
	outA = LuasJajarGenjang(A, B);
	outB = LuasPersegiPanjang(A, C, D, E);
	outC = LuasTrapesium(F, G);
	outD = LuasSetengahLingkaran(F);
	
	// Menghitung L
	L = outA + outD - outB -outC;
	
	// Deklarasi mengenai output data
	cout << "Total Luas Tanah = " << L << "m2" << endl;
	return 0;
}

// Definisi fungsi LuasJajarGenjang
double LuasJajarGenjang(double A, double B) {
	return A * B;
}

// Definisi fungsi LuasPersegiPanjang
double LuasPersegiPanjang(double A, double C, double D, double E) {
	return (A - (C + D)) * E;
}

// Definisi fungsi LuasTrapesium
double LuasTrapesium(double A, double C, double D, double F, double G) {
	return 0.5 * (G +  (A - (C + D))) * F;
}

// Definisi fungsi LuasSetengahLingkaran
double LuasSetengahLingkaran(double F) {
	return (F * 0.5) * (F * 0.5) * 3.14 * 0.5;
}