// Muhammad Jiwa Islamutidar
// 241011401525
// Pertemuan 11
#include <iostream>
using namespace std;

main () {
	int day;
	
	cout << "Silahkan Masukan Angka Antara 1 sampai 7" << endl;
	cin >> day;
	switch (day) {
		case 1 :
			cout << "Hari Senin";
			break;
		case 2 :
			cout << "Hari Selasa";
			break;
		case 3 : 
			cout << "hari Rabu";
			break;
		case 4 :
			cout << "Hari Kamis";
			break;
		case 5 :
			cout << "hari Jumat";
			break;
		case 6 : 
			cout << "Hari Sabtu";
			break;
		case 7 :
			cout << "hari Minggu";
			break;					
		default :
			cout << "Angka Yang Anda Masukan Salah";
	}
}
