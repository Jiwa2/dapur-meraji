#include <iostream>
using namespace std;
// Muhammad Jiwa Islamutidar
// 241011401525

#define MAX 5

class Stack {
private:
    int data[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    // ini push
    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack penuh!\n";
        } else {
            data[++top] = value;
            cout << value << " ditambah ke stack.\n";
        }
    }

    // ini Pop
    void pop() {
        if (top == -1) {
            cout << "Stack kosong!\n";
        } else {
            cout << data[top--] << " dihapus dari stack.\n";
        }
    }

    // Display
    void display() {
        if (top == -1) {
            cout << "Stack kosong!\n";
        } else {
            cout << "Isi stack: ";
            for (int i = top; i >= 0; i--) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }

    // ini Peek top
    void peek() {
        if (top == -1) {
            cout << "Stack kosong!\n";
        } else {
            cout << "Elemen teratas: " << data[top] << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n=== Aplikasi Line List (Stack) ===\n";
        cout << "Nama  : Muhammad Jiwa Islamutidar\n";
        cout << "NIM   : 241011401525\n";
        cout << "-------------------------------\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display Stack\n";
        cout << "4. Peek Top\n";
        cout << "5. Exit\n";
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Masukkan nilai: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            s.peek();
            break;
        case 5:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
        }
    } while (choice != 5);

    return 0;
}

