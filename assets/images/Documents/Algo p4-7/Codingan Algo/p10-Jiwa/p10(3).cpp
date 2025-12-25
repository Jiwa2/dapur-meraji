// Muhammad Jiwa Islamutidar
// 241011401525
// Pertemuan 10

#include <iostream>
using namespace std;

main () {
	
	int Menu;
	int Makanan;
	int bayar;

	cout << "BERIKUT MENU MAKANAN" << endl;
	cout << "1. Makanan Indonesia" << endl;
	cout << "2. Makanan Barat" << endl;
	cout << "Silahkan Pilih Menu : ";
	cin >> Menu;
	
	if (Menu == 1){
		cout << "berikut Menu Makanan Indonesia" << endl;
		cout << "1. Nasi Goreng" << endl;
		cout << "2. Nasi Uduk" << endl;
		cout << "Silahkan Pilih Makanan" << endl;
		cin >> Makanan;
		
		if (Makanan == 1){
			cout << "Anda Memilih Nasi Goreng Dengan Harga Rp15.000" << endl;
		}else if(Makanan == 2){
			cout << "Anda Memilih Nasi Uduk Dengan Harga Rp10.000" << endl;
		}
		
			
	 } else if (Menu == 2) {
		cout << "Berikut Menu Makanan Barat" << endl;
		cout << "3. Pizza" << endl;
		cout << "4. Burger" << endl;
		cout << "Silahkan Pilih Makanan" << endl;
		cin >> Makanan;
	}
		if (Makanan == 3) {
			cout << "Anda Memilih Pizza Dengan Harga Rp 50.000" << endl;
		} else if (Makanan == 4) {
			cout << "Anda Memilih Burger Dengan Harga Rp 100.000" << endl;
		}
		
		cout << "Silahkan Pilih Pembayaran" << endl;
		cout << "1. Cash" << endl;
		cout << "2. Debit" << endl;
		cin >> bayar;
		
		if (bayar == 1){
			cout << "Anda Memilih Pembayaran Cash, Silahkan Siapkan Uang Untuk Pembayaran Di Kasir" << endl;	
		} else if (bayar == 2){
			cout << "Anda Memilih Pembayaran Debit, Mohon Siapkan Kartu Untuk Pembayaran Di kasir" << endl;
		}
		
		return 0;
	}

