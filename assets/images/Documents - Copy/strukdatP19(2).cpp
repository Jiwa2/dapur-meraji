#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partitionMid(int arr[], int low, int high) {
    int pivot = arr[(low + high) / 2];
    int i = low;
    int j = high;
    int temp;

    cout << "\nPartition (low=" << low << ", high=" << high << ")" << endl;
    cout << " Pivot: " << pivot << endl;

    while (i <= j) {
        while (arr[i] < pivot) { i++; }
        while (arr[j] > pivot) { j--; }

        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            cout << "  Swap index " << i << " dan " << j << ": ";
            printArray(arr, 6);

            i++;
            j--;
        }
    }

    cout << " Partition selesai, index baru: " << i << endl;
    return i;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int index = partitionMid(arr, low, high);

        quickSort(arr, low, index - 1);
        quickSort(arr, index, high);
    }
}

int main() {
    int data[] = {24, 10, 11, 40, 15, 25};
    int n = 6;

    cout << "Data awal: ";
    printArray(data, n);

    quickSort(data, 0, n - 1);

    cout << "\nHasil akhir Quick Sort: ";
    printArray(data, n);

    return 0;
}

