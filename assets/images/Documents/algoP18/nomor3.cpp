#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream cek("log.txt");

    if (cek) {
    
        cout << "Isi log.txt:\n";
        string baris;
        while (getline(cek, baris)) {
            cout << baris << endl;
        }
        cek.close();
    } else {
 
        ofstream baru("log.txt");
        baru << "Log dimulai";
        baru.close();
        cout << "log.txt tidak ada, file baru dibuat.\n";
    }

    return 0;
}

