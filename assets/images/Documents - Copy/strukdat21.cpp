#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void printArray(const vector<int>& arr, const string& prefix = "") {
    cout << prefix << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1);
    vector<int> R(n2);

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    cout << "   [MERGE] Kiri: ";
    printArray(L);
    cout << "   [MERGE] Kanan: ";
    printArray(R);

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    cout << "   [RESULT] Tergabung: ";
    vector<int> merged_result;
    for (int m = left; m <= right; ++m) merged_result.push_back(arr[m]);
    printArray(merged_result);
    cout << "-----------------------" << endl;
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    cout << "[DIVIDE] Bagian: (" << left << ".." << mid << ") dan (" << (mid + 1) << ".." << right << ")" << endl;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    int data_array[] = {78, 85, 60, 90, 72, 88, 65, 80, 95, 100};
    int n = sizeof(data_array) / sizeof(data_array[0]);

    vector<int> nilai(data_array, data_array + n);

    cout << "=== Merge Sort Mahasiswa ===" << endl;
    cout << "Data Awal: ";
    printArray(nilai);
    cout << "============================" << endl;

    mergeSort(nilai, 0, nilai.size() - 1);

    cout << "============================" << endl;
    cout << "Data Akhir: ";
    printArray(nilai);
    cout << "============================" << endl;

    return 0;
}
