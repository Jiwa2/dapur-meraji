#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Mahasiswa {
    int no;
    string nama;
    long nim;
    string hobi;
};

void print_data(const vector<Mahasiswa>& mhs) {
    cout << "No\tNama\t\tNIM\t\tHobi\n";
    cout << "--------------------------------------------------------------------------\n";

    for (int i = 0; i < (int)mhs.size(); i++) {
        cout << mhs[i].no << "\t" 
             << mhs[i].nama << "\t\t" 
             << mhs[i].nim << "\t" 
             << mhs[i].hobi << endl;
    }
    cout << endl;
}

void insertion_sort_ascending(vector<Mahasiswa>& arr) {
    for (int i = 1; i < (int)arr.size(); i++) {
        Mahasiswa key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j].nim > key.nim) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void insertion_sort_descending(vector<Mahasiswa>& arr) {
    for (int i = 1; i < (int)arr.size(); i++) {
        Mahasiswa key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j].nim < key.nim) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {

    vector<Mahasiswa> kelas;

    Mahasiswa m1 = {1, "Afdal", 241011402051, "Futsal"};
    Mahasiswa m2 = {2, "Dimas", 241011400248, "Lari"};
    Mahasiswa m3 = {3, "Yehez", 241011402104, "Futsal"};
    Mahasiswa m4 = {4, "Rozi", 241011400231, "Tidur"};
    Mahasiswa m5 = {5, "Ichsan", 241011400235, "Baca Novel"};
    Mahasiswa m6 = {6, "Bayu", 241011400277, "Mancing"};
    Mahasiswa m7 = {7, "Firman", 241011400233, "Bersepeda"};
    Mahasiswa m8 = {8, "Jiwa", 241011401525, "Mancing"};
    Mahasiswa m9 = {9, "Medina", 241011401536, "Nonton"};
    Mahasiswa m10 = {10, "Aldo", 241011401526, "Basket"};
    Mahasiswa m11 = {11, "Fadly", 241011401528, "Tidur"};
    Mahasiswa m12 = {12, "Yuda", 241011402026, "Gitar"};
    Mahasiswa m13 = {13, "Fazri", 241011402315, "Padel"};
    Mahasiswa m14 = {14, "Affan", 241011400266, "Main Golf"};
    Mahasiswa m15 = {15, "Rido", 241011400232, "Tenis"};

    kelas.push_back(m1);
    kelas.push_back(m2);
    kelas.push_back(m3);
    kelas.push_back(m4);
    kelas.push_back(m5);
    kelas.push_back(m6);
    kelas.push_back(m7);
    kelas.push_back(m8);
    kelas.push_back(m9);
    kelas.push_back(m10);
    kelas.push_back(m11);
    kelas.push_back(m12);
    kelas.push_back(m13);
    kelas.push_back(m14);
    kelas.push_back(m15);

    cout << "=== DATA MAHASISWA (ASLI) ===\n";
    print_data(kelas);

    vector<Mahasiswa> asc = kelas;
    insertion_sort_ascending(asc);
    cout << "=== DATA MAHASISWA BERDASARKAN NIM (ASCENDING) ===\n";
    print_data(asc);

    vector<Mahasiswa> desc = kelas;
    insertion_sort_descending(desc);
    cout << "=== DATA MAHASISWA BERDASARKAN NIM (DESCENDING) ===\n";
    print_data(desc);

    return 0;
}

