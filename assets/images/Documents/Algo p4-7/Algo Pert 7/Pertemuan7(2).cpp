#include <iostream>
using namespace std;

main () {
	int umur;
	cout << "masukan umur anda :" ;
	cin >> umur;
	
	if(umur>15){
		cout << "remaja";
	}else {
		cout << "anak-anak"; } 
		
	if(umur>20) {
		cout << "dewasa"; 
	}else {
		cout << "remaja";
	}
}
