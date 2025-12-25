#include <iostream>
using namespace std;

int main(){
	int pil;
	string menu;
	
	cout << "Silahkan Pilih Jenis Makanan" << endl;
	cout << "1. Makanan Indonesia\n2. Makanan Barat" << endl;
	cout << "pilihan : ";
	cin >> pil;
	
	switch(pil){
		case 1 :
		menu = " Makanan Indonesia";
		break;
		
		case 2 :
		menu = " Makanan Barat";
		break;
	} 
	cout << "Anda Memilih : " << menu;
	
}

