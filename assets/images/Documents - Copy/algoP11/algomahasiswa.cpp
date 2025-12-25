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
    if (mhs.empty()) {
        cout << "Data masih kosong!\n";
        return;
    }

    cout << "\nNo\tNama\t\tNIM\t\tHobi\n";
    cout << "--------------------------------------------------------\n";
    for (int i = 0; i < (int)mhs.size(); i++) {
        cout << i + 1 << "\t" << mhs[i].nama << "\t\t"
             << mhs[i].nim << "\t" << mhs[i].hobi << endl;
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

int cari_data(const vector<Mahasiswa>& arr, string nim) {
    for (int i = 0; i < (int)arr.size(); i++) {
        if (arr[i].nim == nim) {
            return i;
        }
    }
    return -1;
}

void hapus_data(vector<Mahasiswa>& arr, string nim) {
    int index = cari_data(arr, nim);
    if (index != -1) {
        arr.erase(arr.begin() + index);
        cout << "Data dengan NIM " << nim << " berhasil dihapus!\n";
    } else {
        cout << "Data tidak ditemukan!\n";
    }
}

int main() {
    vector<Mahasiswa> kelas;
    int pilih;

    do {
        cout << "\n===== MENU PROGRAM MAHASISWA =====\n";
        cout << "1. Input Data\n";
        cout << "2. Tampilkan Data Asli\n";
        cout << "3. Sorting Ascending NIM\n";
        cout << "4. Sorting Descending NIM\n";
        cout << "5. Cari Data (berdasarkan NIM)\n";
        cout << "6. Hapus Data (berdasarkan NIM)\n";
        cout << "7. Keluar\n";
        cout << "Pilih menu : ";
        cin >> pilih;
        cin.ignore();

        if (pilih == 1) {
            Mahasiswa m;
            cout << "Nama   : ";
            getline(cin, m.nama);
            cout << "NIM    : ";
            getline(cin, m.nim);
            cout << "Hobi   : ";
            getline(cin, m.hobi);

            kelas.push_back(m);
        }
        else if (pilih == 2) {
            print_data(kelas);
        }
        else if (pilih == 3) {
            {
                vector<Mahasiswa> asc = kelas;
                insertion_sort_ascending(asc);
                print_data(asc);
            }
        }
        else if (pilih == 4) {
            {
                vector<Mahasiswa> desc = kelas;
                insertion_sort_descending(desc);
                print_data(desc);
            }
        }
        else if (pilih == 5) {
            string nim;
            cout << "Masukkan NIM yang dicari: ";
            getline(cin, nim);
            int idx = cari_data(kelas, nim);

            if (idx != -1) {
                cout << "\nData ditemukan:\n";
                cout << "Nama: " << kelas[idx].nama << endl;
                cout << "NIM : " << kelas[idx].nim << endl;
                cout << "Hobi: " << kelas[idx].hobi << endl;
            } else {
                cout << "Data tidak ditemukan!\n";
            }
        }
        else if (pilih == 6) {
            string nim;
            cout << "Masukkan NIM yang akan dihapus: ";
            getline(cin, nim);
            hapus_data(kelas, nim);
        }

    } while (pilih != 7);

    cout << "\nProgram selesai.\n";
    return 0;
}

