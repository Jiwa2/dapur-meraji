#include <iostream>
#include <vector>
#include <string>
#include <sstream> // supaya bisa ubah int ? string
using namespace std;

class Produk {
public:
    string sku;
    string nama_produk;
    int stok;

    Produk(string s, string n, int st) {
        sku = s;
        nama_produk = n;
        stok = st;
    }

    // Ganti to_string() dengan stringstream biar aman di semua compiler
    string toString() const {
        stringstream ss;
        ss << "SKU: " << sku << ", Nama Produk: " << nama_produk << ", Stok: " << stok;
        return ss.str();
    }
};

Produk* cari_produk_linear(vector<Produk>& daftar_produk, const string& sku_target) {
    for (int i = 0; i < daftar_produk.size(); i++) {
        if (daftar_produk[i].sku == sku_target) {
            return &daftar_produk[i];
        }
    }
    return NULL;
}

int main() {
    vector<Produk> data_produk;
    data_produk.push_back(Produk("001", "Laptop", 5));
    data_produk.push_back(Produk("002", "Keyboard", 12));
    data_produk.push_back(Produk("003", "Mouse", 3));
    data_produk.push_back(Produk("004", "Headset", 20));
    data_produk.push_back(Produk("005", "PC", 35));

    cout << "=== Sistem Pencarian Produk Gudang ===" << endl;
    cout << "Masukkan SKU produk yang ingin dicari: ";

    string sku_input;
    getline(cin, sku_input);

    Produk* hasil_pencarian = cari_produk_linear(data_produk, sku_input);

    if (hasil_pencarian) {
        cout << "\nProduk ditemukan:" << endl;
        cout << hasil_pencarian->toString() << endl;
    } else {
        cout << "\nProduk dengan SKU '" << sku_input << "' tidak ditemukan di gudang." << endl;
    }

    return 0;
}

