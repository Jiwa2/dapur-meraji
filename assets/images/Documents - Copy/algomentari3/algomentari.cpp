#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//nomor 1
int main() {
    ofstream myfile("file.txt");

    if (!myfile.is_open()) {
        cout << "Gagal membuka file!" << endl;
        return 1;
    }

    cout << "Masukkan kalimat yang ingin ditambahkan ke file : " << endl;
    string input;
    while (true) {
        getline(cin, input);
        if (input.empty()) break;  
        myfile << input << endl;   
    }

    myfile.close();

    system("notepad file.txt");

    return 0;
}
