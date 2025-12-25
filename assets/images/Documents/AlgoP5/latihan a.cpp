#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

class Pegawai {
private:
    string nama;
    string id_pegawai;
    double gaji_pokok;

public:
    Pegawai(string n, string id, double gaji)
        : nama(n), id_pegawai(id), gaji_pokok(gaji) {}

    string info_pegawai() const {
        ostringstream ss;
        ss << "Nama: " << nama << endl
           << "ID Pegawai: " << id_pegawai << endl
           << "Gaji Pokok: " << fixed << setprecision(0) << gaji_pokok << endl; 
        return ss.str();
    }

    double hitung_gaji_bersih() {
        return gaji_pokok;
    }
};

int main() {
    Pegawai p1("Jiwa", "001", 10000000);
    cout << p1.info_pegawai() << endl;
    cout << "Gaji Bersih: " << fixed << setprecision(0) << p1.hitung_gaji_bersih() << endl;

    return 0;
}

