#include <iostream>

using namespace std;

int main() {
    int jam;
    double totalBiaya = 0;
    double HARGA_24_JAM_PERTAMA = 455000;
    double HARGA_2_JAM_KEDUA = 55000;
    double HARGA_2_JAM_KETIGA = 75000;
    double HARGA_2_JAM_SELANJUTNYA = 95000;
    double DISKON_35_JAM = 0.15;
    double DISKON_48_JAM = 0.10;

    cout << "Masukkan lama pemakaian (jam): ";
    cin >> jam;

    if (jam <= 24) {
        totalBiaya = HARGA_24_JAM_PERTAMA;
    } else {
        totalBiaya = HARGA_24_JAM_PERTAMA;
        int sisaJam = jam - 24;

        if (sisaJam > 0) {
            if (sisaJam <= 2) {
                totalBiaya += HARGA_2_JAM_KEDUA;
            } else {
                totalBiaya += HARGA_2_JAM_KEDUA;
                sisaJam -= 2;

                if (sisaJam <= 2) {
                    totalBiaya += HARGA_2_JAM_KETIGA;
                } else {
                    totalBiaya += HARGA_2_JAM_KETIGA;
                    sisaJam -= 2;
                    
                    totalBiaya += (sisaJam / 2) * HARGA_2_JAM_SELANJUTNYA;
                    if (sisaJam % 2 != 0) {
                        totalBiaya += (HARGA_2_JAM_SELANJUTNYA / 2);
                    }
                }
            }
        }
    }

    if (jam > 35) {
        totalBiaya -= totalBiaya * DISKON_35_JAM;
    }

    if (jam > 48) {
        totalBiaya -= HARGA_24_JAM_PERTAMA * DISKON_48_JAM;
    }

    // Menampilkan hasil
    cout << "Total biaya sewa: Rp" << totalBiaya << endl;

    return 0;
}
