#include <iostream>
#include <vector>
#include <string> // penting biar string dikenali
using namespace std;

// Kelas Induk
class Kendaraan {
protected:
    string namaKendaraan;
public:
    Kendaraan(string nama) : namaKendaraan(nama) {}

    // Method virtual untuk polimorfisme
    virtual string bersuara() {
        return namaKendaraan + " mengeluarkan suara kendaraan umum.";
    }

    virtual string bergerak() {
        return namaKendaraan + " bergerak di jalan raya.";
    }

    // Virtual destructor
    virtual ~Kendaraan() {}
};

// Kelas Anak 1
class Truk : public Kendaraan {
private:
    string jenis;
public:
    Truk(string nama, string jenisTruk) : Kendaraan(nama), jenis(jenisTruk) {}

    string bersuara() override {
        return namaKendaraan + " si " + jenis + " mengeluarkan suara: Vroooom! Bruuum!";
    }
};

// Kelas Anak 2
class MobilListrik : public Kendaraan {
private:
    string bentukMobil;
public:
    MobilListrik(string nama, string bentuk) : Kendaraan(nama), bentukMobil(bentuk) {}

    string bersuara() override {
        return namaKendaraan + " si " + bentukMobil + " bersuara lembut: Whummm...";
    }

    string modeOtonom() {
        return namaKendaraan + " sedang berjalan dalam mode otonom.";
    }
};

// Kelas Anak 3
class Motor : public Kendaraan {
private:
    string jenisMesin;
public:
    Motor(string nama, string mesin) : Kendaraan(nama), jenisMesin(mesin) {}

    string bersuara() override {
        return namaKendaraan + " bermesin " + jenisMesin + " berbunyi: Ngengggg!";
    }
};

int main() {
    // Membuat objek
    Kendaraan* k1 = new Kendaraan("Transportasi Umum");
    Kendaraan* k2 = new Truk("Titan", "Truk Kontainer");
    Kendaraan* k3 = new MobilListrik("Zenith", "Sedan Listrik");
    Kendaraan* k4 = new Motor("Raptor", "250cc");

    // ? Cara aman tanpa fitur C++11
    vector<Kendaraan*> daftarKendaraan;
    daftarKendaraan.push_back(k1);
    daftarKendaraan.push_back(k2);
    daftarKendaraan.push_back(k3);
    daftarKendaraan.push_back(k4);

    cout << "--- Suara dan Gerakan Kendaraan ---" << endl;
    for (size_t i = 0; i < daftarKendaraan.size(); ++i) {
        cout << daftarKendaraan[i]->bersuara() << endl;
        cout << daftarKendaraan[i]->bergerak() << endl << endl;
    }

    // Dealokasi memori
    for (size_t i = 0; i < daftarKendaraan.size(); ++i) {
        delete daftarKendaraan[i];
    }

    return 0;
}

