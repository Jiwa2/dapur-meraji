#include <iostream>
#include <vector>
using namespace std;

class Buku {
	private:
		string judul;
		string penulis;
		
	public:
		Buku(string j, string p) {
			judul = j;
			penulis = p;
		}
		
		void tampilkan_info() {
			cout << "Judul: " << judul << endl;
			cout << "Penulis: " << penulis << endl;
		}
};

	int main () {
		vector<Buku> daftar_buku;
			daftar_buku.push_back(Buku("Pemrograman Python", "Jiwa"));
			daftar_buku.push_back(Buku("Algoritam dan pemrograman", "Medina"));
			daftar_buku.push_back(Buku("Struktur Data", "Fadly"));
			
			for (int i = 0; i < daftar_buku.size(); i++) {
				daftar_buku[i].tampilkan_info();
				cout << "..." << endl;
			}
			return 0;
}
