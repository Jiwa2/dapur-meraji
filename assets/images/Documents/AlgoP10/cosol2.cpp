#include <iostream>
#include <vector>
#include <string>
#include <cctype> 

using namespace std;

string toLowerCase(const string &str) {
    string lowerStr = str;
    for (size_t i = 0; i < lowerStr.size(); ++i) {
        lowerStr[i] = static_cast<char>(tolower(static_cast<unsigned char>(lowerStr[i])));
    }
    return lowerStr;
}

int sequentialSearchCaseInsensitive(const vector<string> &arr, const string &target) {
    string targetLower = toLowerCase(target);

    for (size_t i = 0; i < arr.size(); ++i) {
        if (toLowerCase(arr[i]) == targetLower) {
            return static_cast<int>(i); 
        }
    }
    return -1; 
}

int main() {
    const char* names[] = {
        "Jiwa",
        "Medina",
        "Fadly",
        "Aldo",
        "Agoy",
        "Daus",
        "Arif"
    };
    size_t n_names = sizeof(names) / sizeof(names[0]);

    vector<string> daftar_absensi;
    for (size_t i = 0; i < n_names; ++i) {
        daftar_absensi.push_back(string(names[i]));
    }

    cout << "===============================" << endl;
    cout << "     DAFTAR ABSENSI MAHASISWA   " << endl;
    cout << "===============================" << endl;
    for (size_t i = 0; i < daftar_absensi.size(); ++i) {
        cout << i + 1 << ". " << daftar_absensi[i] << endl;
    }
    cout << "-------------------------------" << endl;

    string nama_dicari;
    cout << "Masukkan nama yang ingin dicari: ";
    getline(cin, nama_dicari);

    int indeks = sequentialSearchCaseInsensitive(daftar_absensi, nama_dicari);

    cout << "-------------------------------" << endl;
    if (indeks != -1)
        cout << "Mahasiswa atas nama'" << nama_dicari << "' ditemukan pada indeks " << indeks
             << ". beliau Hadir!" << endl;
    else
        cout << "Mahasiswa atas nama'" << nama_dicari << "' tidak ketemu. Mungkin tidak hadir." << endl;

    cout << "-------------------------------" << endl;
    cout << "Program selesai." << endl;

    return 0;
}

