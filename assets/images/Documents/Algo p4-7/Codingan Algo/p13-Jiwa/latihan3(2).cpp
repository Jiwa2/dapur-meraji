//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 13

#include <iostream>
using namespace std;

int main (){
	int jumlahSiswa;
	double totalNilai = 0;
	double nilai;
	
	printf ("Masukan Jumlah Siswa: ");
	scanf ("%i" ,&jumlahSiswa);
	
	for (int i = 1; i <= jumlahSiswa; i++) {
		printf ("Masukan Nilai Siswa Ke %d : ", i);
		scanf ("%i", &nilai);
		totalNilai += nilai;
	}
	
	double rataRata = jumlahSiswa / totalNilai;	
	printf ("Rata Rata Nilai Ujian Siswa Adalah %d : ", rataRata);
	
	return 0;
}
