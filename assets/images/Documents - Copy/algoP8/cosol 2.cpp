#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Mahasiswa {
public:
    string nim;
    string nama;
    string jurusan;

   
    Mahasiswa(string n, string nm, string j) {
        nim = n;
        nama = nm;
        jurusan = j;
    }

   
    string toString() const {
        return "NIM: " + nim + ", Nama: " + nama + ", Jurusan: " + jurusan;
    }
};


Mahasiswa* cari_mahasiswa_linear(vector<Mahasiswa>& daftar_mahasiswa, const string& nim_target) {
    for (int i = 0; i < daftar_mahasiswa.size(); i++) {
        if (daftar_mahasiswa[i].nim == nim_target) {
            return &daftar_mahasiswa[i]; 
        }
    }
    return NULL; 
}

int main() {

    vector<Mahasiswa> data_mahasiswa;
    data_mahasiswa.push_back(Mahasiswa("2023001", "Budi Santoso", "Teknik Informatika"));
    data_mahasiswa.push_back(Mahasiswa("2023002", "Siti Aminah", "Sistem Informasi"));
    data_mahasiswa.push_back(Mahasiswa("2023003", "Ahmad Fauzi", "Manajemen Bisnis"));
    data_mahasiswa.push_back(Mahasiswa("2023004", "Dewi Lestari", "Akuntansi"));
    data_mahasiswa.push_back(Mahasiswa("2023005", "Rina Susanti", "Teknik Elektro"));

  
    string nim_dicari_1 = "2023003";
    Mahasiswa* hasil_cari_1 = cari_mahasiswa_linear(data_mahasiswa, nim_dicari_1);

    if (hasil_cari_1)
        cout << "Mahasiswa dengan NIM " << nim_dicari_1 << " ditemukan:" << endl
             << hasil_cari_1->toString() << endl;
    else
        cout << "Mahasiswa dengan NIM " << nim_dicari_1 << " tidak ditemukan." << endl;

    cout << string(30, '-') << endl;

   
    string nim_dicari_2 = "2023010";
    Mahasiswa* hasil_cari_2 = cari_mahasiswa_linear(data_mahasiswa, nim_dicari_2);

    if (hasil_cari_2)
        cout << "Mahasiswa dengan NIM " << nim_dicari_2 << " ditemukan:" << endl
             << hasil_cari_2->toString() << endl;
    else
        cout << "Mahasiswa dengan NIM " << nim_dicari_2 << " tidak ditemukan." << endl;

    cout << string(30, '-') << endl;

   
    string nim_dicari_3 = "2023001";
    Mahasiswa* hasil_cari_3 = cari_mahasiswa_linear(data_mahasiswa, nim_dicari_3);

    if (hasil_cari_3)
        cout << "Mahasiswa dengan NIM " << nim_dicari_3 << " ditemukan:" << endl
             << hasil_cari_3->toString() << endl;
    else
        cout << "Mahasiswa dengan NIM " << nim_dicari_3 << " tidak ditemukan." << endl;

    return 0;
}

