#include <iostream>
using namespace std;
// no 3
int main () {
	int nilai1, nilai2, nilai3;
	
	cout << "Masukan nilai pertama: ";
	cin >> nilai1;
	cout << "Masukan nilai kedua: ";
	cin >> nilai2;
	cout << "Masukan nilai ketiga: ";
	cin >> nilai3;
	
	float rata = (nilai1 + nilai2 + nilai3) / 3.0; 
    cout << "Rata-rata nilai = " << rata << endl;

    return 0;
}
