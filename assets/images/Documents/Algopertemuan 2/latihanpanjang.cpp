#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main() {
vector<string> data;
data.push_back("Jiwa");
data.push_back("Budi");
data.push_back("Anton");

vector<int> nilainya;
nilainya.push_back(100);
nilainya.push_back(90);
nilainya.push_back(80);


    int pilihan;
    string input;
    int nilaiInt;
    int hapusIndex;

    do {
        cout << "\n===== SELAMAT DATANG DI ARSIP NILAI =====" << endl;
        cout << "1. Input Data Baru" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "4. Hitung Rata-Rata Nilai" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        if (!(cin >> pilihan)) {
            cout << "Input tidak valid. Masukkan angka menu." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        switch (pilihan) {
            case 1: // Input data 
                cout << "Masukkan Nama: ";
                getline(cin, input);

                cout << "Masukan Nilai: ";
                while (!(cin >> nilaiInt)) { 
                    cout << "Nilai harus berupa angka. Masukkan lagi: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                data.push_back(input);
                nilainya.push_back(nilaiInt);
                cout << "Data berhasil ditambahkan!" << endl;
                break;

			case 2: { 
    			cout << "\nDaftar Data (urut nilai tertinggi):" << endl;
    			if (data.empty()) {
        		cout << "(Belum ada data)" << endl;
    		} else {
        		vector<int> idx(data.size());
        		for (int i = 0; i < (int)idx.size(); ++i) idx[i] = i;
        		for (int i = 0; i < (int)idx.size() - 1; ++i) {
            	int maxpos = i;
            	for (int j = i + 1; j < (int)idx.size(); ++j) {
                if (nilainya[idx[j]] > nilainya[idx[maxpos]]) {
                maxpos = j;
                }
            }
            	if (maxpos != i) {
                int tmp = idx[i];
                idx[i] = idx[maxpos];
                idx[maxpos] = tmp;
            }
        	}

		        for (int i = 0; i < (int)idx.size(); ++i) {
        	    cout << i+1 << ". " << data[idx[i]] << " - " << nilainya[idx[i]] << endl;
        	}
    		}
    		break;
			}


            case 3:
                cout << "\nDaftar Data:" << endl;
                if (data.empty()) {
                    cout << "(Belum ada data untuk dihapus)" << endl;
                } else {
                    for (size_t i = 0; i < data.size(); ++i) {
                        cout << i+1 << ". " << data[i] << " - " << nilainya[i] << endl;
                    }
                    cout << "Pilih nomor data yang ingin dihapus: ";
                    if (!(cin >> hapusIndex)) {
                        cout << "Input tidak valid." << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        break;
                    }
                    if (hapusIndex > 0 && hapusIndex <= (int)data.size()) {
                        cout << "Data \"" << data[hapusIndex - 1] << "\" berhasil dihapus!" << endl;
                        data.erase(data.begin() + (hapusIndex - 1));
                        nilainya.erase(nilainya.begin() + (hapusIndex - 1));
                    } else {
                        cout << "Nomor tidak valid!" << endl;
                    }
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                break;

            case 4:
                if (nilainya.empty()) {
                    cout << "Belum ada data nilai!" << endl;
                } else {
                    int total = 0;
                    for (size_t i = 0; i < nilainya.size(); ++i) {
                        total += nilainya[i]; 
                    }
                    for (size_t i = 0; i < data.size(); ++i) {
                        cout << i+1 << ". " << data[i] << " - " << nilainya[i] << endl;
                }
                    double rata = static_cast<double>(total) / nilainya.size();
                    cout << "Dengan data tersebut, rata-rata nilai: " << rata << endl;
                }
                break;

            case 5: // Keluar
                cout << "Keluar dari program!!!" << endl;
                break;

            default:
                cout << "Pilihan tidak ada!!!" << endl;
        }

    } while (pilihan != 5);

    return 0;
}

