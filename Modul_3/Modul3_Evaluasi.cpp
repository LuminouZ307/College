#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int pemakaian;
    double totalBiaya = 0.0;

    cout << "Lama pemakaian: ";
    cin >> pemakaian;

    if (pemakaian <= 24) {
        totalBiaya = 455000; /* kl kurang / sama dgn 24jam */
    } else {
        totalBiaya = 455000;
        int sisaJam = pemakaian - 24;
        if (sisaJam > 0) {
            totalBiaya += 55000; /* 2 jam kedua */
            sisaJam -= 2;
        }
        if (sisaJam > 0) {
            totalBiaya += 75000; /* 2 jam ketiga */
            sisaJam -= 2;
        }
        
		/* 2 jam seterusnya */
        if (sisaJam > 0) {
            int total_2_jam_lebih = sisaJam / 2; 
            if (sisaJam % 2 != 0) {
                total_2_jam_lebih++; /* kl sisa 2 jam */
            }
            totalBiaya += total_2_jam_lebih * 95000; /* dikali 2 jam seterusnya * 95k */
        }
    }

    /* diskon */
	if (pemakaian > 35) {
	    totalBiaya = totalBiaya * 0.85; /* potongan 15% dr total */
	}
    if (pemakaian > 48) {
        totalBiaya -= 455000 * 0.10; /* Potongan 10% dr 24jam */
    }

    cout << "Total Biaya: IDR" << fixed << setprecision(0) << totalBiaya << endl;

    return 0;
}