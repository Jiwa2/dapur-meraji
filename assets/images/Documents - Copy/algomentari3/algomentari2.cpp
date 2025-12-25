#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//nomor 2
int tulisNama(const string& namaFile, const vector<string>& daftarNama) {
    ofstream myfile("file.txt"); 
    if (!myfile.is_open()) {
        return 0; 
    }

    for (size_t i = 0; i < daftarNama.size(); i++) {
        myfile << daftarNama[i];
        if (i != daftarNama.size() - 1) {
            myfile << ", ";
        }
    }
    myfile << endl;
    myfile.close();
    return 1; 
}

int main() {
    vector<string> nama;
    int jumlah;

    cout << "Berapa banyak nama yang ingin diinput? ";
    cin >> jumlah;
    cin.ignore(); 

    for (int i = 0; i < jumlah; i++) {
        string inputNama;
        cout << "Masukkan nama ke-" << (i + 1) << ": ";
        getline(cin, inputNama);
        if (!inputNama.empty()) {
            nama.push_back(inputNama);
        }
    }

    if (tulisNama("file.txt", nama)) {
        cout << "Daftar nama berhasil ditulis ke file.txt" << endl;

        
        system("notepad file.txt");
    } else {
        cout << "Gagal menulis ke file!" << endl;
    }

    return 0;
}
