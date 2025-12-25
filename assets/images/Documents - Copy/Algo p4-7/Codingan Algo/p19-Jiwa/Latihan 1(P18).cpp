//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 19

#include <iostream>9
using namespace std;

int main () {
	int array  [3][7] = {
	{1, 2, 3},
	{4, 5, 6}
	};
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("%d", array[i][j]);
		}
		printf("\n");
	}
}
