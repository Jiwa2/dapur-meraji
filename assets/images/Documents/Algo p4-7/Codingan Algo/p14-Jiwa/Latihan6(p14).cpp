//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 14

#include <stdio.h>
int main () {
	int var1, var2;
	int step1, step2;
	int limit1, limit2;
	
	printf("Masukan Nilai Awal Var1 : ");
	scanf("%d", &var1);
	printf("Masukan Nilai Awal Var2 : ");
	scanf("%d", &var2);
	
	printf("Masukan langkah Untuk Var1 : ");
	scanf("%d", &step1);
	printf("Masukan Langkah Untuk Var2 : ");
	scanf("%d", &step2);
	
	printf("Masukan Batas Untuk Var1 : ");
	scanf("%d", &limit1);
	printf("Masukan Batas Untuk Var2 : ");
	scanf("%d", &limit2);
	
	while(var1 <= limit1 && var2 <= limit2) {
		printf("Var1: %d, Var2: %d\n", var1, var2);
		var1 += step1;
		var2 += step2; 
	}
	printf("Pengulangan Selesai");
}                            
