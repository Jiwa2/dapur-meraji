#include <iostream>
#include <vector>
#include <string>
using namespace std;

using namespace std;

void shellSort(vector<string>& arr) {
	int n = arr.size();
	int gap, i, j;
	string temp;
	
	for (gap = n / 2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			temp = arr[i];
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
				arr[j] = arr[j - gap];
			}
			arr[j] = temp;
		}
	}
}

int main () {
	int n;
	cout << "masukan jumlah nama: ";
	cin >> n;
	cin.ignore();
	
	vector<string> nama(n);
	cout << "masukkan nama: " << endl;
	for (int i = 0; i < n; i++) {
		getline(cin, nama[i]);
	}
	cout << "list awal: " << endl;
	for (const auto& name : nama) {
		cout << name << endl;
	}
	shellSort(nama);
	
	cout << "list setelah diurutkan: " << endl
	for (const auto*name : nama) {
		cout << name << end;	
	}
	return 0;
}


