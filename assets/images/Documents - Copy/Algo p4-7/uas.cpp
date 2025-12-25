#include <iostream>
using namespace std;

int main() {
	int matriks[2][3];
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++){
		cout << "Masukkan Angka Untuk Baris " << i + 1 << " Kolom " << j + 1 << ": ";
		cin >> matriks[i][j]; 
		}
	}
	cout << "Matriks awal :\n" << endl;
		for(int i = 0; i < 2; i++) {
			for(int j = 0; j < 3; j++){
				cout << matriks[i][j] << " "; 
			}
			cout << "\n";
		}
	cout << "\nMatriks transpos\n";
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 2; j++){
				cout << matriks[j][i] << " ";
			}
			cout << endl;
		}	
		return 0;
}
