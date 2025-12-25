#include <iostream>
#include <vector>
using namespace std;

int sequentialSearch(const vector<int>& arr, int key) {
    cout << "\nMulai mencari " << key << " dalam array: [ ";
    for (size_t j = 0; j < arr.size(); ++j) cout << arr[j] << " ";
    cout << "]" << endl;

    for (size_t i = 0; i < arr.size(); ++i) {
        cout << "Langkah " << i + 1 << ": Membandingkan elemen pada indeks "
             << i << " (" << arr[i] << ") dengan " << key << "..." << endl;

        if (arr[i] == key) {
            cout << "sudah ketemu! " << key << " ada di indeks " << i << "." << endl;
            return static_cast<int>(i);
        }
    }

    cout << "\n" << key << " tidak ketemu dalam array." << endl;
    return -1;
}

int main() {
    int tmp[] = {10, 20, 30, 40, 50, 60};
    vector<int> data_array(tmp, tmp + (sizeof(tmp)/sizeof(tmp[0])));

    cout << "------------------------------------------" << endl;

    cout << "Array data: [ ";
    for (size_t j = 0; j < data_array.size(); ++j) cout << data_array[j] << " ";
    cout << "]" << endl;

    while (true) {
        int search_key;
        cout << "\nMasukkan angka yang ingin dicari atau ketik -1 untuk keluar: ";
        cin >> search_key;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Input tidak valid. Tolong masukkin angka." << endl;
            continue;
        }

        if (search_key == -1) {
            cout << "Tengkyu! Program berakhir." << endl;
            break;
        }

        int hasil = sequentialSearch(data_array, search_key);

        if (hasil != -1)
            cout << "Jadi, Angka " << search_key << " ketemu di indeks" << hasil << ":)" << endl;
        else
            cout << "Jadi, Angka " << search_key << " tidak ketemu di array:(" << endl;
    }

    return 0;
}

