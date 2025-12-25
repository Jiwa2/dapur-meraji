//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 13

#include <iostream>
using namespace std;

int main (){
	int jumlahSiswa;
	double totalNilai = 0;
	double nilai;
	
	cout << "Masukan Jumlah Siswa :";
	cin >> jumlahSiswa;
	
	for (int i = 1; i <= jumlahSiswa; i++) {
		cout << "Masukan Nilai Siswa Ke " << i << ": ";
		cin >> nilai;
		totalNilai += nilai;
	}
	double rataRata = jumlahSiswa + totalNilai;
	cout << "Rata Rata Nilai Ujian Siswa Adalah: " << rataRata << endl;
	
	return 0;
}
