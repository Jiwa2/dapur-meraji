#include <iostream>
#include <cstring>
using namespace std;

void shellSort(char arr[][100], int n) {
    int gap = n / 2;

    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            char temp[100];
            strcpy(temp, arr[i]);

            int j = i;
            while (j >= gap && strcmp(arr[j - gap], temp) > 0) {
                strcpy(arr[j], arr[j - gap]);
                j -= gap;
            }

            strcpy(arr[j], temp);
        }

        gap /= 2;
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah nama: ";
    cin >> n;

    char names[n][100];

    cout << "\nMasukkan nama satu per satu:\n";
    for (int i = 0; i < n; i++) {
        cout << "Nama ke-" << i+1 << ": ";
        cin >> names[i];
    }

    cout << "\nList sebelum diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }

    shellSort(names, n);

    cout << "\n\nList setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }

    cout << "\n";
    return 0;
}

