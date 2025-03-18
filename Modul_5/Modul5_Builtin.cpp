/*	---------------------------------------------------------------
	Nama Program	: 	Penggunaan build-in function
	Mahasiswa		:	Arif Rahman Hudaya
	NPM				: 	2420501046
	Tanggal Buat	:	10/03/2025
	----------------------------------------------------------------	*/
	
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float A, B, K;
	cout << "Input sisi tegak (cm) = ";
	cin >> A;
	cout << "Input sisi alas (cm) = ";
	cin >> B;
	
	K = floor(sqrt(pow(A, 2) + pow(B, 2)));
	
	cout << "Sisi miring = " << K << " cm \n";
	return 0;
}