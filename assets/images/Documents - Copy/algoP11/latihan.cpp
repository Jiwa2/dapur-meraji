#include <iostream>
#include <vector>
using namespace std;

void insertion_sort_ascending(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void insertion_sort_descending(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void print_vector(vector<int>& arr) {
    for (int i = 0; i < (int)arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr1[] = {8, 2, 5, 1, 6};
    vector<int> data1(arr1, arr1 + 5);

    cout << "Nomor 1: Insertion Sort Ascending\n";
    cout << "Data Awal  : ";
    print_vector(data1);

    insertion_sort_ascending(data1);

    cout << "Hasil Akhir: ";
    print_vector(data1);
    cout << endl;

    int arr2[] = {15, 7, 20, 10, 8};
    vector<int> data2(arr2, arr2 + 5);

    cout << "Nomor 2: Insertion Sort Descending\n";
    cout << "Data Awal  : ";
    print_vector(data2);

    insertion_sort_descending(data2);

    cout << "Hasil Akhir: ";
    print_vector(data2);
    cout << endl;

    return 0;
}

