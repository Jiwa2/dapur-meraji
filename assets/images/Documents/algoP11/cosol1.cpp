#include <iostream>
#include <vector>
using namespace std;

vector<int> insertion_sort_descending(vector<int> arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        cout << "\n--- Iterasi ke-" << i << " ---\n";
        cout << "Array sebelum proses: ";
        for (int x : arr) cout << x << " ";
        cout << "\n";

        cout << "Elemen yang akan disisipkan (key): " << key << endl;
        cout << "Membandingkan " << key << " dengan elemen di sebelah kirinya (untuk descending)...\n";

        // Descending: geser jika key > arr[j]
        while (j >= 0 && key > arr[j]) {
            cout << "  " << key << " > " << arr[j] << ", geser " << arr[j] << " ke kanan.\n";

            arr[j + 1] = arr[j];
            j--;

            cout << "  Array sementara: ";
            for (int x : arr) cout << x << " ";
            cout << "\n";
        }

        arr[j + 1] = key;
        cout << "Sisipkan " << key << " pada posisi yang benar.\n";

        cout << "Array setelah iterasi ke-" << i << ": ";
        for (int x : arr) cout << x << " ";
        cout << "\n";
    }

    return arr;
}

int main() {
    vector<int> data = {4, 7, 3, 9};

    cout << "Data Awal: ";
    for (int x : data) cout << x << " ";
    cout << "\n";

    vector<int> data_terurut_desc = insertion_sort_descending(data);

    cout << "\n--- Proses Selesai ---\n";
    cout << "Data Terurut (Descending): ";
    for (int x : data_terurut_desc) cout << x << " ";
    cout << "\n";

    vector<int> data2 = {12, 11, 13, 5, 6};

    cout << "\n--- Contoh Lain ---\n";
    cout << "Data Awal: ";
    for (int x : data2) cout << x << " ";
    cout << "\n";

    vector<int> data2_terurut_desc = insertion_sort_descending(data2);

    cout << "\nData Terurut (Descending): ";
    for (int x : data2_terurut_desc) cout << x << " ";
    cout << "\n";

    return 0;
}

