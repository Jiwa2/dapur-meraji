//Muhammad jiwa Islamutidar
//241011401525
//Pertemuan 19

#include <iostream>
using namespace std;

int main() {
    int matriks[3][3] = { 
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9} 
    };

    for (int i = 0; i < 3; i++) {
        int jumlah = 0;
        for (int j = 0; j < 3; j++) {
            jumlah += matriks[i][j];
        }
        cout << "Jumlah Baris " << i + 1 << " : " << jumlah << endl;
    }

    return 0;
}

