#include <iostream>
#include <string>
using namespace std;

class Notifikasi {
	protected:
		string pesan;
		
	public:
		Notifikasi(string p) : pesan(p) {}
		
		virtual void kirim_notifikasi() {
			cout << "Notifikasi dari jiwa: " << pesan << endl;
		}
};

class EmailNotifikasi : public Notifikasi {
	private:
		string alamat_email_tujuan;
		
	public:
		EmailNotifikasi(string p, string email) 
			: Notifikasi(p), alamat_email_tujuan(email) {}
		
		void kirim_notifikasi() override {
			cout << "Kepada: " << pesan << ", Pesan: " << alamat_email_tujuan << endl;
		}
};	

int main () {
	Notifikasi notifikasi_umum("Terima Kasih Sudah Mendaftar");
	notifikasi_umum.kirim_notifikasi();
	
	EmailNotifikasi email("Pendaftar", "Silahkan besok datang jam 9 pagi");
	email.kirim_notifikasi();
	
	return 0;
	
	return 0;
}


