//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 14

#include <iostream>
using namespace std;

int main () {
	
	char name[50];
	int repeat, i = 0;
	
	printf("Masukan Nama anda : ");
	scanf("%49s", name);
	
	printf("Berapa Kali Nama Anda Ingin Diulang? ");
	scanf("%d", &repeat);
	
	while(i < repeat) {
		printf("%s", name);
		i++;
	}
	
}
