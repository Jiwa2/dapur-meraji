//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 17

#include <stdio.h>
using namespace std;

int main () {
	
	int angka[5];
	
	angka[0] = 10;
	angka[1] = 20;
	angka[2] = 30;
	angka[3] = 40;
	angka[4] = 50;

	int nilai[5] = {10, 20, 30, 40, 50};	
	int data[5] = {1, 2};
	
	for(int i = 0; i < 5; i++) {
		printf("nilai[%d] = %d\n", i, nilai[i]);	
	}
	return 0;
}
