#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;

    for (i = 0; i < n - 1; i++) {
        minIdx = i;

        cout << "\nIterasi ke-" << i+1 << ":" << endl;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        cout << " Nilai minimum ditemukan: " << arr[minIdx] 
             << " pada index " << minIdx << endl;

        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;

        cout << " Hasil sementara: ";
        printArray(arr, n);
    }
}

int main() {
    int data[] = {24, 10, 11, 40, 15, 25};
    int n = 6;

    cout << "Data awal: ";
    printArray(data, n);

    selectionSort(data, n);

    cout << "\nHasil akhir Selection Sort: ";
    printArray(data, n);

    return 0;
}

