#include <stdio.h>
using namespace std;

int main () {
	int angka;
	
	do {
		printf("Masukan Angka Positif : ");
		scanf("%d", &angka);
	} while (angka <= 0);
	
	printf("Anda Telah Memasukan Angka Posifit : %d\n", angka);
	
	return 0;
}
