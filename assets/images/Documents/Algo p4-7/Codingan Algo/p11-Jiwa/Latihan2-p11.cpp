// Muhammad Jiwa Islamutidar
// 241011401525
// Pertemuan 11

#include <iostream>
using namespace std;

main (){
	
	int bulan;
	
	printf ("Silahkan Masukan Angka Antara 1 Sampai 12\n");
	scanf ("%d", &bulan);
	
	switch (bulan){
		case 1 :
			printf ("Bulan Januari");
			break;
		case 2 : 
			printf ("Bulan Februari");
			break;	
		case 3 :
			printf ("Bulan Maret");
			break;
		case 4 :
			printf ("Bulan April");
			break;
		case 5 :
			printf ("Bulan Mei");
			break;
		case 6 :
			printf ("Bulan Juni");
			break;
		case 7 :
			printf ("Bulan Juli");
			break;	
		case 8 :
			 printf ("Bulan Agustus");
			 break;
		case 9 :
			 printf ("Bulan September");
			 break;
		case 10 :
			printf ("Bulan Oktober");
			break;
		case 11 :
			printf ("Bulan November");
			break;
		case 12 :
			printf ("Bulan desember");
			break;
		default :
			printf ("Angka Yang Anda Masukan Salah");				 	 				
	} 
}
