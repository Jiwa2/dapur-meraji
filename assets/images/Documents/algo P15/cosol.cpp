#include <iostream>
using namespace std;

void shellShort(int arr[], int n) {
	int gap, i, j, temp;
	
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

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main () {
	int my_data[] = {8, 6, 7, 2, 1, 4, 5, 3};
	int n = sizeof(my_data) / sizeof(my_data[0]);
	
	cout << "List asli: ";
	printArray(my_data, n);
	
	shellSort(my_data, n);
	
	cout << "List data setelah diurutkan: ";
	printArray(my_data, n);
	
	cout << "\n" << string(30, '=') << "\n";
	
	int another_data[] = {90, 10, 80, 20, 70, 30, , 60, 40, 50};
	n = sizeof(another_data) / sizeof(another_data[0]);
	
	cout << "list asli: ";
	printArray(another_data, n);
	
	shellSort(another_data, n);
	
	cout << "List setelah diurutkan: ";
	printArray(another_data, n);
	
	return 0;
}
