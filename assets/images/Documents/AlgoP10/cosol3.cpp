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

bool cariMenuMakanan(const vector<string> &daftarMenu, const string &menuTarget) {
    string targetLower = toLowerCase(menuTarget);

    for (size_t i = 0; i < daftarMenu.size(); ++i) {
        if (toLowerCase(daftarMenu[i]) == targetLower) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<string> daftarMenu;
    daftarMenu.push_back("Nasi Goreng Spesial");
    daftarMenu.push_back("Mie Ayam");
    daftarMenu.push_back("Sate Ayam");
    daftarMenu.push_back("Bakso Urat");
    daftarMenu.push_back("Ayam Geprek");
    daftarMenu.push_back("Nasi Uduk");
    daftarMenu.push_back("Es Teh Manis");

    cout << "=== DAFTAR MENU RESTORAN ===" << endl;
    for (size_t i = 0; i < daftarMenu.size(); ++i) {
        cout << "- " << daftarMenu[i] << endl;
    }
    cout << "----------------------------------------" << endl;

    string menuCari;
    cout << "Masukkan nama menu yang ingin Anda pesan: ";
    getline(cin, menuCari);

    if (cariMenuMakanan(daftarMenu, menuCari))
        cout << "Menu '" << menuCari << "' TERSEDIA di restoran kami." << endl;
    else
        cout << "Maaf, menu '" << menuCari << "' TIDAK TERSEDIA." << endl;

    return 0;
}

