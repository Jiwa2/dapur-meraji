#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void bubble_sort_descending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int my_list[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(my_list) / sizeof(my_list[0]);

    cout << "Original list: ";
    print_array(my_list, n);

    bubble_sort(my_list, n);

    cout << "Sorted list (Ascending): ";
    print_array(my_list, n);

    int my_list_2[] = {5, 1, 4, 2, 8};
    n = sizeof(my_list_2) / sizeof(my_list_2[0]);

    cout << "Original list 2: ";
    print_array(my_list_2, n);

    bubble_sort(my_list_2, n);

    cout << "Sorted list 2 (Ascending): ";
    print_array(my_list_2, n);

    int my_list_3[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(my_list_3) / sizeof(my_list_3[0]);

    cout << "Original list 3: ";
    print_array(my_list_3, n);

    bubble_sort_descending(my_list_3, n);

    cout << "Sorted list 3 (Descending): ";
    print_array(my_list_3, n);

    return 0;
}
