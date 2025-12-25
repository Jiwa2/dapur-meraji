#include <iostream>
#include <vector>
using namespace std;

class Siswa {
protected:
    string nama;
    string kelas;
    int nilai;

public:
    Siswa(string n, string k, int nl) {
        nama = n;
        kelas = k;
        nilai = nl;
    }
    virtual void tampilkan_info() {
        cout << "Nama : " << nama << endl;
        cout << "Kelas : " << kelas << endl;
        cout << "Nilai : " << nilai << endl;
    }
    string getNama() {
        return nama;
    }
};

class SiswaIT : public Siswa {
private:
    string program_studi;

public:
    SiswaIT(string n, string k, int nl, string ps)
        : Siswa(n, k, nl) {
        program_studi = ps;
    }

    void tampilkan_info() override {
        Siswa::tampilkan_info();
        cout << "Program Studi : " << program_studi << endl;
    }

    void tampilkan_program() {
        cout << "Program Studi : " << program_studi << endl;
    }
};

int main() {
    vector<SiswaIT> daftar_siswa;

    daftar_siswa.push_back(SiswaIT("Jiwa", "006", 90, "Teknik Informatika"));
    daftar_siswa.push_back(SiswaIT("Aldo", "006", 80, "Teknik Informatika"));
    daftar_siswa.push_back(SiswaIT("Agus", "006", 70, "Teknik Informatika"));

    cout << "== Daftar Nama Mahasiswa ==" << endl;
    for (int i = 0; i < daftar_siswa.size(); i++) {
        daftar_siswa[i].tampilkan_info();
        cout << endl;
    }

    string cari;
    cout << "Masukan nama yang ingin dicari: ";
    cin >> cari;

    bool ketemu = false;
    for (int i = 0; i < daftar_siswa.size(); i++) {
        if (daftar_siswa[i].getNama() == cari) {
            cout << "Nama Ditemukan: " << endl;
            daftar_siswa[i].tampilkan_info();
            ketemu = true;
            break;
        }
    }

    if (!ketemu) {
        cout << "Siswa dengan nama " << cari << " tidak ditemukan" << endl;
    }
    return 0;
}

