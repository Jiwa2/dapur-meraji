#include <iostream>
using namespace std;

int main () {
    string nama;
    int gaji_pokok;
    int tarif_lembur = 10000;
    int jam_lembur;

    cout << "Nama: ";
    cin >> nama;
    cout << "Gaji pokok: ";
    cin >> gaji_pokok;
    cout << "Jam lembur: ";
    cin >> jam_lembur;

    int gaji_bersih = gaji_pokok + (jam_lembur * tarif_lembur);

    cout << "Tarif jam lembur = " << tarif_lembur << endl;
    cout << "Gaji bersih = " << gaji_bersih << endl;

    return 0;
}

