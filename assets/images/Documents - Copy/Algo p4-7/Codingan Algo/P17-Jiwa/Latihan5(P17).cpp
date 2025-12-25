//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 17

#include <iostream>
using namespace std;
int main () {
	string buah[5] = {"Apel", "Mangga", "Jeruk", "Pir", "Semangka"};
	int hargaBuah[5] = {5000, 1000, 7000, 8000, 15.000};
	int jumlahTerjual[5] = {5, 2, 3, 4, 1};
		
	for (int i = 0; i < 5; i++) {
		cout << buah[i] << " " << jumlahTerjual[i] << " buah" << endl;
		cout << "Harganya : " << hargaBuah[i] << endl;
	}
	int totalbuah = 0;
	int keuntungan = 0;
	for(int i = 0; i < 5; i++) {
		totalbuah += jumlahTerjual[i];
		keuntungan += jumlahTerjual[i];
	}
	
	cout << "Buah Terjual : "<<totalbuah << endl;
	cout << "Keuntungannya : "<<keuntungan;
	return 0;
}
