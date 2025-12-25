//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 19

#include <iostream>
using namespace std;

int main() {
    int arr[4][2] = { 
        {10, 11}, 
        {20, 21}, 
        {30, 31}, 
        {40, 41} 
    };
    int i, j;

    cout << "Printing a 2D array:\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) { 
            cout << "\t" << arr[i][j];
        }
        cout << endl; 
    }
    return 0;
}


