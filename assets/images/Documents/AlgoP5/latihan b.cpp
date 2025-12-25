#include <iostream>
using namespace std;

int main () {
	string nama;
	int id;
	int gaji_pokok;
	int tunjangan;
	int gaji_bersih;
	
	cout << "Nama: ";
	cin >> nama;
	cout << "id: ";
	cin >> id;
	cout << "gaji pokok: ";
	cin >> gaji_pokok;
	cout << "Tunjangan: ";
	cin >> tunjangan;
	cout << "Gaji bersih: " << gaji_pokok + tunjangan;
	
	
}
