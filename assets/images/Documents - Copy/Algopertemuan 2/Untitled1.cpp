#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Siswa {
    string nama;
    int umur;
    string kelas;
};

int main() {
    vector<Siswa> daftarSiswa;
    int jumlah;

    cout << "Masukkan jumlah siswa: ";
    cin >> jumlah;
    cin.ignore(); // membersihkan newline setelah input jumlah

    for (int i = 0; i < jumlah; i++) {
        Siswa s;
        cout << "Masukkan nama siswa ke-" << i+1 << ": ";
        getline(cin, s.nama);
        cout << "Masukkan umur siswa ke-" << i+1 << ": ";
        cin >> s.umur;
        cin.ignore();
        cout << "Masukkan kelas siswa ke-" << i+1 << ": ";
        getline(cin, s.kelas);

        daftarSiswa.push_back(s);
    }

    cout << "\nData siswa yang sudah diinput:\n";
    for (int i = 0; i < daftarSiswa.size(); i++) {
        cout << "Siswa ke-" << i+1 << ":\n";
        cout << "Nama: " << daftarSiswa[i].nama << "\n";
        cout << "Umur: " << daftarSiswa[i].umur << "\n";
        cout << "Kelas: " << daftarSiswa[i].kelas << "\n\n";
    }

    return 0;
}

