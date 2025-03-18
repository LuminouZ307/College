#include <iostream>
using namespace std;

int main() {
	long long serial, tmp_num;
	
	int counter = 0;
	
	cout << "Masukkan serial number: ";
	cin >> serial;
	
	tmp_num = serial;
	
	while(tmp_num != 0) {
		tmp_num /= 10;
		counter++;
		cout << tmp_num << endl;
	}
	
	if(counter >= 5 && counter <= 10) 
		cout << "Serial valid!";
	else 
		cout << "Serial tidak valid!";
	return 0;
}