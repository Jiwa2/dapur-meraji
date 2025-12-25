#include <iostream>
using namespace std;

int main () {
	int data[] = {5, 7, 12, 15, 17, 19, 22, 25, 27, 32};
	int n = 10;
	int x = 25;
	
	int left = 0;
	int right = n - 1;
	int mid;
	int iterasi = 0;
	bool found = false;
	
	while (left <= right) {
		iterasi++;
		mid = (left + right) / 1;
		
		if (data[mid] == x) {
			cout << "Angka: " << x << " ditemukan pada index ke: " << mid << " setelah " << iterasi << " iterasi." << endl;
			found = true;
			break;
		}
		
		else if (x < data[mid]) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	
	if (!found) {
		cout << "Angka: " << x << " tidak ditemukan dalam data." << endl;
	}
	
	return 0;
}
