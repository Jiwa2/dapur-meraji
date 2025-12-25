#include <iostream>
#include <vector>
#include <algorithm>  
#include <cstdlib>    
#include <ctime>      

using namespace std;


int binarySearchIterative(const vector<int>& data, int target) {
    int left = 0;
    int right = data.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (data[mid] == target)
            return mid;
        else if (data[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; 
}


int binarySearchRecursive(const vector<int>& data, int left, int right, int target) {
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    if (data[mid] == target)
        return mid;
    else if (data[mid] < target)
        return binarySearchRecursive(data, mid + 1, right, target);
    else
        return binarySearchRecursive(data, left, mid - 1, target);
}

int main() {
    srand(time(0));
    vector<int> data;

    // 1. Buat 20 angka acak
    for (int i = 0; i < 20; i++) {
        data.push_back(rand() % 100 + 1); 
    }

    cout << "=============================\n";
    cout << "   PROGRAM BINARY SEARCH\n";
    cout << "=============================\n";

    cout << "\nData sebelum diurutkan:\n";
    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << (i == data.size() - 1 ? "" : ", ");
    }
    cout << endl;

    // 2. Urutkan data
    sort(data.begin(), data.end());

    cout << "\nData setelah diurutkan:\n";
    for (int i = 0; i < data.size(); i++) {
        cout << "[" << i << "] " << data[i] << "\n";
    }

    // 3. Input angka yang dicari
    int target;
    cout << "\nMasukkan angka yang ingin dicari: ";
    cin >> target;

    // 4. Panggil fungsi binary search
    int hasilIter = binarySearchIterative(data, target);
    int hasilRek = binarySearchRecursive(data, 0, data.size() - 1, target);

    // 5. Tampilkan hasil
    cout << "\n=============================\n";
    cout << "         HASIL PENCARIAN\n";
    cout << "=============================\n";

    if (hasilIter != -1)
        cout << "Iteratif : Angka " << target << " ditemukan pada indeks ke-" << hasilIter << endl;
    else
        cout << "Iteratif : Angka " << target << " tidak ditemukan.\n";

    if (hasilRek != -1)
        cout << "Rekursif : Angka " << target << " ditemukan pada indeks ke-" << hasilRek << endl;
    else
        cout << "Rekursif : Angka " << target << " tidak ditemukan.\n";

    cout << "=============================\n";

    return 0;
}

