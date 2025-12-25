#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// nomor 4
bool cariNama(const string& namaFile, const string& target) {
    ifstream myfile("file.txt");
    if (!myfile.is_open()) {
        cout << "File tidak bisa dibuka!" << endl;
        return false;
    }

    string line;
    bool ketemu = false;

    while (getline(myfile, line)) {
        if (line.find(target) != string::npos) { 
            cout << "Nama Ditemukan : " << line << endl;
            cout << "Berhasil Ditemukan !!!" <<endl;
            ketemu = true;
            break; 
        }
    }
    myfile.close();
    return ketemu;
}

int main() {
    string cari;
    bool ketemu = false;

    while (!ketemu) {
        cout << "Masukkan nama yang ingin dicari: ";
        getline(cin, cari);

        ketemu = cariNama("file.txt", cari);
        if (!ketemu) {
            cout << "Nama '" << cari << "tidak dapat ditemukan, coba lagi..." << endl;
        }
    }

    cout << "\nPencarian selesai, data ditemukan." << endl;
    return 0;
}
