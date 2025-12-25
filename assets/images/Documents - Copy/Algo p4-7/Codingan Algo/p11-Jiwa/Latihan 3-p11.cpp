#include <iostream>
using namespace std;

main () {
	
	int Menu, Makanan;

	
	cout << "BERIKUT MENU MAKANAN" << endl;
	cout << "Makanan Indonesia" << endl;
	cout << "Makanan Barat" << endl;
	cout << "Silahkan Pilih Menu : ";
	cin >> Menu;
	
	switch (Menu){
		case 1 :
		cout << "berikut Menu Makanan Indonesia" << endl;
		cout << "1. Nasi Goreng" << endl;
		cout << "2. Nasi Uduk" << endl;
		cout << "Silahkan Pilih Makanan" << endl;
		cin >> Makanan;
		
		
		switch (Makanan){
			case 1 :
			cout << "Anda Memilih Nasi Goreng" << endl;
			break;
			case 2 :
			cout << "Anda Memilih Nasi Uduk" << endl;
			break;
		}
		
		
	 	case 2 :
		cout << "Berikut Menu Makanan Barat" << endl;
		cout << "1. Pizza" << endl;
		cout << "2. Burger" << endl;
		cout << "Silahkan Pilih Makanan" << endl;
		cin >> Makanan;
		
		
		switch(Makanan) {
			case 1 :
			cout << "Anda Memilih Pizza" << endl;
			break;
			
			case 2 :
			cout << "Anda Memilih Burger" << endl;
			break;
		}
		
	}
}

