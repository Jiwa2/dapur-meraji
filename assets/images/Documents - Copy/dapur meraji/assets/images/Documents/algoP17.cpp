#include <iostream>
using namespace std;

int main() {
    int harga[12] = {
        15000,
        10000,
        20000,
        5000,
        30000,
        2000,
        3000,
        1000,
        18000,
        500,
        800,
        4000
    };

    int n = 12;

    cout << "Array sebelum sorting:\n";
    for (int i = 0; i < n; i++) {
        cout << harga[i] << " ";
    }
    cout << "\n\n";

    cout << "=== PROSES PERTUKARAN (Bubble Sort) ===\n\n";

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (harga[j] > harga[j + 1]) {
                cout << "Tukar " << harga[j] << " dengan " << harga[j + 1] << endl;

                int temp = harga[j];
                harga[j] = harga[j + 1];
                harga[j + 1] = temp;

                cout << "Array sekarang: ";
                for (int k = 0; k < n; k++) {
                    cout << harga[k] << " ";
                }
                cout << "\n\n";
            }
        }
    }

    cout << "=== HASIL AKHIR (Sudah Terurut) ===\n";
    for (int i = 0; i < n; i++) {
        cout << harga[i] << " ";
    }
    cout << endl;

    return 0;
}

