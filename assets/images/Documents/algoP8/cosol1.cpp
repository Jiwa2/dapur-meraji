#include <iostream>
#include <vector>
#include <string>
using namespace std;


template <typename T>
int linear_search(const vector<T>& arr, const T& target) {

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
 
    vector<int> data_angka;
    int arr_angka[] = {15, 22, 10, 30, 5, 88, 7};
    data_angka.assign(arr_angka, arr_angka + 7);

    int nilai_dicari_1 = 30;
    int nilai_dicari_2 = 100;

    int indeks_1 = linear_search(data_angka, nilai_dicari_1);
    int indeks_2 = linear_search(data_angka, nilai_dicari_2);

    if (indeks_1 != -1)
        cout << "Nilai " << nilai_dicari_1 << " ditemukan pada indeks: " << indeks_1 << endl;
    else
        cout << "Nilai " << nilai_dicari_1 << " tidak ditemukan." << endl;

    if (indeks_2 != -1)
        cout << "Nilai " << nilai_dicari_2 << " ditemukan pada indeks: " << indeks_2 << endl;
    else
        cout << "Nilai " << nilai_dicari_2 << " tidak ditemukan." << endl;

   
    vector<string> daftar_buah;
    string arr_buah[] = {"apel", "jeruk", "mangga", "pisang", "anggur"};
    daftar_buah.assign(arr_buah, arr_buah + 5);

    string buah_dicari_1 = "mangga";
    string buah_dicari_2 = "semangka";

    int indeks_buah_1 = linear_search(daftar_buah, buah_dicari_1);
    int indeks_buah_2 = linear_search(daftar_buah, buah_dicari_2);

    if (indeks_buah_1 != -1)
        cout << "Buah '" << buah_dicari_1 << "' ditemukan pada indeks: " << indeks_buah_1 << endl;
    else
        cout << "Buah '" << buah_dicari_1 << "' tidak ditemukan." << endl;

    if (indeks_buah_2 != -1)
        cout << "Buah '" << buah_dicari_2 << "' ditemukan pada indeks: " << indeks_buah_2 << endl;
    else
        cout << "Buah '" << buah_dicari_2 << "' tidak ditemukan." << endl;

    return 0;
}

