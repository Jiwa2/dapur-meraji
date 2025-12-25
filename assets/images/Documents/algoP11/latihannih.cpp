#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Mahasiswa {
    int no;
    string nama;
    string nim;    
    string hobi;
};

void print_data(const vector<Mahasiswa>& mhs) {
    cout << "\nNo\tNama\t\tNIM\t\t\tHobi\n";
    cout << "--------------------------------------------------------------\n";

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
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;
    cin.ignore(); 

    for (int i = 0; i < jumlah; i++) {
        Mahasiswa m;
        m.no = i + 1;

        cout << "\n=== Input Mahasiswa ke-" << m.no << " ===\n";

        cout << "Nama   : ";
        getline(cin, m.nama);

        cout << "NIM    : ";
        getline(cin, m.nim);

        cout << "Hobi   : ";
        getline(cin, m.hobi);

        kelas.push_back(m);
    }

    cout << "\n=== DATA MAHASISWA (ASLI) ===\n";
    print_data(kelas);

    vector<Mahasiswa> asc = kelas;
    insertion_sort_ascending(asc);
    cout << "=== DATA MAHASISWA (ASCENDING NIM) ===\n";
    print_data(asc);

    vector<Mahasiswa> desc = kelas;
    insertion_sort_descending(desc);
    cout << "=== DATA MAHASISWA (DESCENDING NIM) ===\n";
    print_data(desc);

    return 0;
}

