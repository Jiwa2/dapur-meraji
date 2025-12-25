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

int sequentialSearch(const vector<string> &listNama, const string &target) {
    string targetLower = toLowerCase(target);
    for (size_t i = 0; i < listNama.size(); ++i) {
        if (toLowerCase(listNama[i]) == targetLower) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int main() {
    vector<string> namaTeman;
    namaTeman.push_back("Radit");
    namaTeman.push_back("Suhada");
    namaTeman.push_back("Siti");
    namaTeman.push_back("Budi");
    namaTeman.push_back("Daus");
    namaTeman.push_back("Fajar");
    namaTeman.push_back("Arif");
    namaTeman.push_back("Farhan");
    namaTeman.push_back("Medina");
    namaTeman.push_back("Aldo");
    namaTeman.push_back("Fadly");
    namaTeman.push_back("Bagas");
    namaTeman.push_back("Revan");
    namaTeman.push_back("Angga");
    namaTeman.push_back("Jiwa");

    cout << "Daftar Nama Teman:" << endl;
    for (size_t i = 0; i < namaTeman.size(); ++i) {
        cout << "- " << namaTeman[i] << endl;
    }
    cout << "----------------------------------------" << endl;

    vector<string> testNama;
    testNama.push_back("Medina");
    testNama.push_back("Ucup");
    testNama.push_back("Daus");
    testNama.push_back("Mega");

    for (size_t j = 0; j < testNama.size(); ++j) {
        int hasil = sequentialSearch(namaTeman, testNama[j]);
        if (hasil != -1)
            cout << "Nama '" << testNama[j] << "' ditemukan pada indeks " << hasil << "." << endl;
        else
            cout << "Nama '" << testNama[j] << "' tidak ditemukan dalam daftar." << endl;
    }

    return 0;
}

