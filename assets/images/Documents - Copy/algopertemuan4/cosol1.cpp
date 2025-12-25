#include <iostream>
using namespace std;

class Mahasiswa {
	private:
		string nama;
		string npm;
	public:
		Mahasiswa(string n, string p){
			nama = n;
			npm = p;
		}
		
		void tampilan_info() {
			cout << "Mahasiswa: " << nama << ", NPM: " << npm << endl;
		}
};

int main () {
	Mahasiswa mhs1("Upin", "241011406267");
	Mahasiswa mhs2("Ipin", "241011406269");
	mhs1.tampilan_info();
	mhs2.tampilan_info();
	
	return 0;
}
