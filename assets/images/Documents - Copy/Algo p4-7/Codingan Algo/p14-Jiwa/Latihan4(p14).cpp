//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 14

#include <iostream>
using namespace std;

int main () {
	
	char name[10];
	int repeat, i = 0;
	
	cout << "Masukan Nama anda: ";
	cin >> name;
	
	cout << "Berapa kali nama anda ingin diulang? ";
	cin >> repeat;
	
	while(i < repeat) {
		cout << name << endl;
		i++;
	}
	
}
