#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data_mahasiswa.txt", ios::app); 

    if (!file) {
        cout << "Gagal membuka/ membuat file.\n";
        return 0;
    }

    file << "Andi\n";
    file << "Budi\n";
    file << "Citra\n";

    file.close();
    cout << "Tiga nama mahasiswa sudah ditulis ke file.\n";

    return 0;
}

