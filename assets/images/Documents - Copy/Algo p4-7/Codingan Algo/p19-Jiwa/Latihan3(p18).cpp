//Muhammad Jiwa Islamutidar
//241011401525
//Pertemuan 19

#include <iostream>
using namespace std;
int main() {
    int matriks[3][3];

    // Input elemen matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukkan elemen untuk baris " << i + 1 << " kolom " << j + 1 << ": ";
            cin >> matriks[i][j];
        }
    }
    cout << "Matriks yang dimasukkan adalah:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << "\n";
    }
}



