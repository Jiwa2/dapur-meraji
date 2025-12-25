#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        bool swapped = false; 
       
        for (int j = 0; j < n - 1 - i; j++) {

            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void print_vector(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    cout << "=== Contoh 1 ===" << endl;
    vector<int> my_list;
    my_list.push_back(21);
    my_list.push_back(6);
    my_list.push_back(9);
    my_list.push_back(33);
    my_list.push_back(3);

    cout << "List asli: ";
    print_vector(my_list);

    bubble_sort(my_list);

    cout << "List setelah diurutkan: ";
    print_vector(my_list);

    cout << "\n============================\n" << endl;


    cout << "=== Contoh 2 ===" << endl;
    vector<int> another_list;
    another_list.push_back(5);
    another_list.push_back(1);
    another_list.push_back(4);
    another_list.push_back(2);
    another_list.push_back(8);

    cout << "List asli: ";
    print_vector(another_list);

    bubble_sort(another_list);

    cout << "List setelah diurutkan: ";
    print_vector(another_list);

    cout << "\n============================\n" << endl;


    cout << "=== Contoh 3 ===" << endl;
    vector<int> already_sorted_list;
    already_sorted_list.push_back(1);
    already_sorted_list.push_back(2);
    already_sorted_list.push_back(3);
    already_sorted_list.push_back(4);
    already_sorted_list.push_back(5);

    cout << "List asli (sudah terurut): ";
    print_vector(already_sorted_list);

    bubble_sort(already_sorted_list);

    cout << "List setelah diurutkan: ";
    print_vector(already_sorted_list);

    return 0;
}
