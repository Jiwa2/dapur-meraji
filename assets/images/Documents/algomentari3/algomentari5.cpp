#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Fungsi untuk mencari dan menampilkan baris yang mengandung kata kunci
void cariData(const string& filename, const string& keyword) {
    ifstream (filename);
    if (!file.is_open()) {
        cout << "Gagal membuka file untuk pencarian." << endl;
        return;
    }

    string line;
    bool found = false;
    cout << "\nHasil pencarian untuk \"" << keyword << "\":" << endl;
    while (getline(file, line)) {
        // Cari apakah keyword ada di line (case sensitive)
        if (line.find(keyword) != string::npos) {
            cout << line << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Data tidak ditemukan." << endl;
    }
    file.close();
}

int main() {
    const string filename = "file.txt";

    // Menambah catatan baru
    ofstream myfile(filename, ios::app);
    if (!myfile.is_open()) {
        cout << "Gagal membuka file untuk menulis" << endl;
        return 1;
    }

    cout << "Masukan catatan baru (tekan Enter kosong untuk selesai):" << endl;
    string input;
    while (true) {
        getline(cin, input);
        if (input.empty()) break;
        myfile << input << endl;
    }
    myfile.close();

    // Menampilkan seluruh isi file
    ifstream readfile(filename);
    if (!readfile.is_open()) {
        cout << "Gagal membuka file untuk membaca" << endl;
        return 1;
    }

    cout << "\nIsi seluruh catatan:\n";
    string line;
    int count = 0;
    while (getline(readfile, line)) {
        cout << line << endl;
        count++;
    }
    readfile.close();

    cout << "Jumlah baris catatan: " << count << endl;

    // Minta input nama untuk pencarian
    cout << "\nMasukan nama yang ingin dicari: ";
    string keyword;
    getline(cin, keyword);

    // Panggil fungsi pencarian
    cariData(filename, keyword);

    // Membuka file di notepad (Windows)
    system("notepad file.txt");

    return 0;
}
