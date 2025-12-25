#include <iostream>
using namespace std;

main () {
	int a, b, c;
	cout << "masukan nilai ke 1 :"; 
	cin >> a;
	
	cout << "masukan nilai ke 2 : ";
	cin >> b;
	
	cout << "masukan nilai ke 3 : ";
	cin >> c;
	
	if (a>b)
			if (a>c)
				cout << "\nNilai Terbesar : " << a;
			else 
				cout << "\nNilai Terbesar : " << c;
		else 
			if(b>c)
				cout << "\nNilai Terbesar : " << b;
			else 
				cout << "\nNilai Terbesar : " << c; 					
}
