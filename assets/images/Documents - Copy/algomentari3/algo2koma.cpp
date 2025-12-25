#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//nomor 3
int main() {
    
    ofstream myfile("file.txt", ios::app);
    if (!myfile.is_open()) {
        cout << "File tidak bisa dibuka!!" << endl;
        return 0;
    }

    string catatan;
    cout << "Masukkan catatan baru : ";
    getline(cin, catatan);

    myfile << catatan << endl;
    myfile.close();

    ifstream infile("file.txt");
    string line;
    cout << "Keseluruhan Isi file saat ini :" << endl;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();

    return 0;
}
