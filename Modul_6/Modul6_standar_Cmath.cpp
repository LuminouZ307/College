/*	-----------------------------------------------------------------
	Nama Program	:	Menggunakan Standar header file CMATH
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	17 Maret 2025
	-----------------------------------------------------------------	*/
	
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float x, y, z;
	const int n = 2;
	float 
		pangkat, akar, absolut,sisi_miring, sinus, cosinus, 
		tangen, bulat_atas, bulat_bawah, logaritma_bawah, logaritma_atas;
	
	cout << "Input nilai x = ";
	cin >> x;
	cout << "Input nilai y = ";
	cin >> y;
	cout << "Input nilai z = ";
	cin >> z;	
	
	pangkat = pow(x, n);
	akar = sqrt(y);
	absolut = abs(z);
	sisi_miring = sqrt(pow(x, n) + pow(y, n));
	sinus = sin(x);
	cosinus = cos(x);
	tangen = tan(x);
	bulat_atas = ceil(absolut);
	bulat_bawah = floor(absolut);
	logaritma_bawah = log(bulat_bawah);
	logaritma_atas = log(bulat_atas);
	
	cout << "Hasil x^2			= " << pangkat << endl;
	cout << "Hasil akar y			= " << akar << endl;
	cout << "Hasil absolut z 		= " << absolut << endl;
	cout << "Hasil Sisi Miring		= " << sisi_miring << endl;
	cout << "Hasil Sinus			= " << sinus << endl;
	cout << "Hasil Cosinus			= " << cosinus << endl;
	cout << "Hasil Tangen			= " << tangen << endl;
	cout << "Hasil Pembulatan Atas		= " << bulat_atas << endl;
	cout << "Hasil Pembulatan Bawah		= " << bulat_bawah << endl;
	cout << "Hasil Logaritma Atas		= " << logaritma_atas << endl;
	cout << "Hasil Logaritma Bawah		= " << logaritma_bawah << endl;
	return 0;
}

