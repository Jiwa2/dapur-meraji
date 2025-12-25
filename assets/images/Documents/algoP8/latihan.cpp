#include <iostream>
using namespace std;


int linearSearch(int data[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (data[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {

    int data[] = {12, 25, 37, 42, 53, 64, 75, 86, 97, 108};
    int n = 10;
    int target, hasil;

    cout << "=== Program Linear Search ===" << endl;
    cout << "Data dalam array: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl << endl;


    cout << "Masukkan angka yang ingin dicari: ";
    cin >> target;
   
    hasil = linearSearch(data, n, target);

    cout << endl;
    if (hasil != -1)
        cout << "Angka " << target << " ditemukan di indeks ke-" << hasil << endl;
    else
        cout << "Angka " << target << " tidak ditemukan dalam array." << endl;

    return 0;
}

