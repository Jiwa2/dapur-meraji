#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data_mahasiswa.txt");
    if (!file) {
        cout << "File data_mahasiswa.txt tidak ditemukan.\n";
        return 0;
    }

    string nama;
    int nomor = 1;

    while (getline(file, nama)) {
        cout << nomor << ". " << nama << endl;
        nomor++;
    }

    file.close();
    return 0;
}

