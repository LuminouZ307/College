/* 	---------------------------------------------------
	Nama Program	: 	Evaluasi
	Mahasiswa		: 	Arif Rahman Hudaya
	NPM				:	2420501046
	Tanggal Buat	:	03 Maret 2025
	---------------------------------------------------	*/
	
#include <iostream>
using namespace std;

int main() {
    int n = 0, sangat_baik = 0, baik = 0, kurang = 0, cukup = 0, i = 1;
    float total_bonus, gaji;
    cout << "Input Jumlah Karyawan: ";
    cin >> n;
    cout << "Input Gaji Utama: ";
    cin >> gaji;
    while (i <= n) {
        int produktivitas, kedisiplinan, kreativitas, total_skor;
        float bonus = 0;
        cout << "\nKaryawan ke-" << i << endl;
        cout << "Input skor untuk Produktivitas: ";
        cin >> produktivitas;
        cout << "Input skor untuk Kedisiplinan: ";
        cin >> kedisiplinan;
        cout << "Input skor untuk Kreativitas: ";
        cin >> kreativitas;
        total_skor = produktivitas + kedisiplinan + kreativitas;
        cout << "Skor Total: " << total_skor << endl;
        if (total_skor >= 25) {
        	cout << "Kategori: Sangat Baik " << endl;
            bonus = 0.2 * gaji;
            sangat_baik++;
        } 
		else if (total_skor >= 20) {
        	cout << "Kategori: Baik  " << endl;
            bonus = 0.1 * gaji;
            baik++;
        } 
		else if (total_skor >= 15) {
        	cout << "Kategori: Cukup " << endl;
            bonus = 0.05 * gaji;
            cukup++;
        } 
		else {
        	cout << "Kategori: Kurang " << endl;
            bonus = 0;
            kurang++;
        }
        total_bonus += bonus;
        cout << "Bonus: Rp" << bonus << endl;
        i++;
    }
    cout << "\nTotal Karyawan dari 3 Kinerja & Bonus" << endl;
    cout << "1. Sangat Baik: " << sangat_baik << " karyawan" << endl;
    cout << "2. Baik: " << baik << " karyawan" << endl;
    cout << "3. Cukup: " << cukup << " karyawan" << endl;
    cout << "4. Kurang: " << kurang << " karyawan" << endl;
    cout << "Total Bonus: Rp" << total_bonus << endl;
    return 0;
}
