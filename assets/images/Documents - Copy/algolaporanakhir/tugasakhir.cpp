#include <iostream>
#include <vector>
using namespace std;
// no 1
void ubahNilai(vector<int> &data) {
    if (!data.empty()) {
        data[0] = 100;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40};
    vector<int> angka(arr, arr + 4); 

    cout << "Sebelum diubah: ";
    for (int i = 0; i < angka.size(); i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    ubahNilai(angka);

    cout << "Sesudah diubah: ";
    for (int i = 0; i < angka.size(); i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    return 0;
}


