// Muhammad Jiwa Islamutidar
// 241011401525
// Pertemuan 11
#include <iostream>
using namespace std;

main (){
	int menu;
	cout << "Selamat Datang Di Restoran Jiwa..." << endl;
	cout << "Silahkan Pilih Menu Berikut : " << endl;
	cout << "1. Nasi Goreng\n2. Ayam Penyet\n3. Mie Goreng\n4. Ikan Bakar\n5. Sate" << endl;
	cin >> menu;
	switch (menu){
		case 1 : 
			cout << "Anda Memilih Nasi Goreng\nTerima Kasih :)";
			break;
		case 2 :
			cout << "Anda Memilih Ayam Penyet\nTerima Kasih :)";
			break;
		case 3 :
			cout << "Anda Memilih Mie Goreng\nTerima Kasih :)";
			break;
		case 4 :
			cout << "Anda Memilih Ikan Bakar\nTerima Kasih :)";
			break;
		case 5 : 
			cout << "Anda Memilih Sate\nTerima Kasih :)";
			break;
		default :
			cout << "Mohon Maaf... Menu Yang Anda Pilih Tidak Tersedia :(";					
		
	}
}
