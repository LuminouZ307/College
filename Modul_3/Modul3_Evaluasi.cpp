#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int pemakaian;
    double total_biaya = 455000;
	int sisa_jam;
	
    cout << "Lama pemakaian: ";
    cin >> pemakaian;

   	if(pemakaian > 24) {
        sisa_jam = pemakaian - 24;
        if (sisa_jam > 0) {
            total_biaya += 55000;
            sisa_jam -= 2;
        }
        if (sisa_jam > 0) {
            total_biaya += 75000; 
            sisa_jam -= 2;
        }
        
        if (sisa_jam % 2 == 0) {
            total_biaya += (sisa_jam / 2) * 95000;
        }
        
    }

	if(pemakaian > 35) {
		total_biaya -= total_biaya * 15/100;
	}
	
	if(pemakaian > 48) {
		total_biaya -= 455000 * 10/100;
	}
	
	cout << "Total Biaya: " << fixed << setprecision(0) << total_biaya;
    return 0;
}