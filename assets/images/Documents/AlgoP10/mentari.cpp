#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // untuk swap
using namespace std;

// Fungsi Template Selection Sort Ascending
template <typename T>
void selection_sort_ascending(vector<T>& data) {
    int n = data.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(data[i], data[minIndex]);
        }
    }
}

// Fungsi untuk mencetak isi vector (tanpa for auto)
template <typename T>
void printVector(const vector<T>& data) {
    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main() {
    // Inisialisasi gaya lama (C++98)
    int arr[] = {80, 10, 50, 70, 60, 20};
    vector<int> angka(arr, arr + 6); // cara lama untuk isi vector

    cout << "Sebelum diurutkan (angka): ";
    printVector(angka);
    selection_sort_ascending(angka);
    cout << "Setelah diurutkan (angka): ";
    printVector(angka);

    // Contoh string
    string buahArr[] = {"mangga", "apel", "jeruk", "pisang", "anggur"};
    vector<string> buah(buahArr, buahArr + 5);

    cout << "\nSebelum diurutkan (buah): ";
    printVector(buah);
    selection_sort_ascending(buah);
    cout << "Setelah diurutkan (buah): ";
    printVector(buah);

    return 0;
}

