#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string _nama;
    string _nim;
    int _nilai[10];  
    int jumlahNilai; 

public:
    Mahasiswa(string nama, string nim) {
        _nama = nama;
        _nim = nim;
        jumlahNilai = 0;
    }

    string getNama() {
        return _nama;
    }
							// biar read only
    string getNIM() {
        return _nim;
    }

    void tambahNilai(int nilai) {
        if (jumlahNilai < 10) {
            _nilai[jumlahNilai] = nilai;
            jumlahNilai++;
        } else {
            cout << "Sudah mencapai batas maksimal nilai!" << endl;
        }
    }


    double getNilaiRataRata() {
        if (jumlahNilai == 0) return 0.0;
        int total = 0;
        for (int i = 0; i < jumlahNilai; i++) {
            total += _nilai[i];
        }
        return (double) total / jumlahNilai;
    }

    void tampilkanInfo() {
        cout << "Nama: " << _nama << endl;
        cout << "NIM : " << _nim << endl;
        cout << "Nilai: ";
        for (int i = 0; i < jumlahNilai; i++) {
            cout << _nilai[i] << " ";
        }
        cout << endl;
        cout << "Nilai Rata-rata: " << getNilaiRataRata() << endl;
    }
};

int main() {
    Mahasiswa mhs("Jiwa", "241011401525");


    mhs.tambahNilai(80);
    mhs.tambahNilai(90);
    mhs.tambahNilai(100);

    mhs.tampilkanInfo();

    return 0;
}

