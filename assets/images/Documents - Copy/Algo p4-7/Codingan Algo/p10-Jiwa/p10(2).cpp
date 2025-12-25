// Muhammad Jiwa Islamutidar
// 241011401525
// Pertemuan 10

#include <iostream>
using namespace std;

main () {
	int nilai;
	
	cout << "Masukan Nilai : ";
	cin >> nilai;
	
	if (nilai >= 75){
		cout << "lulus" << endl; 
		if (nilai >= 90){
			cout << "Pinter banget lu bro";
		}else {
			cout << "Tapi Kurang pinter lu bro";	
		}
		}else {
			cout << "tidak lulus";
		}
}
