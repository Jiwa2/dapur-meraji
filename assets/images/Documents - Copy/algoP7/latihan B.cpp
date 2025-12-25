#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
using namespace std;

class Karyawan {
protected:
    string nama;
    string id_karyawan;
public:
    Karyawan(string n, string id) : nama(n), id_karyawan(id) {}
    virtual ~Karyawan() {}

    virtual double hitung_gaji() const = 0;
    virtual string info_karyawan() const {
        return "ID: " + id_karyawan + ", Nama: " + nama;
    }
};

class KaryawanTetap : public Karyawan {
private:
    double gaji_bulanan;
    double tunjangan;

public:
    KaryawanTetap(string n, string id, double gaji, double tunjangan = 0)
        : Karyawan(n, id), gaji_bulanan(gaji), tunjangan(tunjangan) {}

    double hitung_gaji() const override {
        return gaji_bulanan + tunjangan;
    }

    string info_karyawan() const override {
        stringstream ss;
        ss << fixed << setprecision(0);
        ss << Karyawan::info_karyawan()
           << ", Tipe: Tetap"
           << ", Gaji Pokok: Rp" << gaji_bulanan
           << ", Tunjangan: Rp" << tunjangan
           << ", Total Gaji: Rp" << hitung_gaji();
        return ss.str();
    }
};

class KaryawanKontrak : public Karyawan {
private:
    int jam_kerja;
    double tarif_per_jam;

public:
    KaryawanKontrak(string n, string id, int jam, double tarif)
        : Karyawan(n, id), jam_kerja(jam), tarif_per_jam(tarif) {}

    double hitung_gaji() const override {
        return jam_kerja * tarif_per_jam;
    }

    string info_karyawan() const override {
        stringstream ss;
        ss << fixed << setprecision(0);
        ss << Karyawan::info_karyawan()
           << ", Tipe: Kontrak"
           << ", Jam Kerja: " << jam_kerja
           << ", Tarif per Jam: Rp" << tarif_per_jam
           << ", Total Gaji: Rp" << hitung_gaji();
        return ss.str();
    }
};

int main() {
    vector<Karyawan*> daftar_karyawan;

    daftar_karyawan.push_back(new KaryawanTetap("Budi", "T001", 5000000, 500000));
    daftar_karyawan.push_back(new KaryawanKontrak("Ani", "K001", 120, 50000));

    // ? versi aman (tanpa "auto") — pasti jalan di semua compiler
    for (size_t i = 0; i < daftar_karyawan.size(); ++i) {
        Karyawan* k = daftar_karyawan[i];
        cout << k->info_karyawan() << endl;
        delete k;
    }

    return 0;
}

