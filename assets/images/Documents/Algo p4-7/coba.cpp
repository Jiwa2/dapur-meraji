#include <stdio.h>

int main() {
	int var1, var2; 
	int step1, step2;
	int limit1, limit2;
	
	printf("Masukkan Nilai Awal var1 : ");
	scanf("%d", &var1);
	printf("Masukkan Nilai Awal var2 : ");
	scanf("%d", &var2);
	
	printf("Masukkan Langkah untuk var1 : ");
	scanf("%d", &step1);
	printf("Masukkan Langkah untuk var2 : ");
	scanf("%d", &step2);
	
	printf("Masukkan Batas Untuk Var1 : ");
	printf("%d", &limit1);
	printf("Masukkan Batas Untuk Var2 : ");
	scanf("%d", &limit2);
	
	while(var1 <= limit1 && var2 <= limit2) {
		printf("var1: %d, var2 : %d\n", var1, var2);
		var1 += step1;
		var2 += step2;
	}
	printf("Pengulangan Selesai.") ;

}
