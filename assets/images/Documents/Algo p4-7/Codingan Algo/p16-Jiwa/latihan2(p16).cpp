//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 14

#include <iostream>
using namespace std;

 main() { 
	int var1, var2;
	int step1, step2;
	int limit1, limit2;
	
	cout << "Masukan Nilai Awal Var1 : ";
	cin >> var1;
	cout << "Masukan Nilai Awal Var2 : ";
	cin >> var2;
	
	cout << "Masukan langkah Untuk Var1 : ";
	cin >> step1;
	cout << "Masukan Langkah Untuk Var2 : ";
	cin >> step2;
	
	cout << "Masukan Batas Untuk Var1 : ";
	cin >> limit1;
	cout << "Masukan Batas Untuk Var2 : ";
	cin >> limit2;
	do {
	    cout << "var1 : " << var1 << ", var2 : " << var2 << endl;
		var1 += step1;
		var2 += step2; 
	} while (var1 <= limit1 && var2 <= limit2);	
	cout << "Pengulangan Selesai" << endl;	
}

