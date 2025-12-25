//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 19

#include <iostream>
using namespace std;

int main () {
	
	int arr [4][2] = {
	{1, 2},
	{1, 2},
	{1, 2},
	{1, 2}
	};
	
	int i,j;
	
   for(int i = 0; i < 4; i++) {
        cout << "Row" << i << ": ";
        for(int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
       cout<< endl;
}
}
