#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cctype>
using namespace std;

class Person {
protected:
    string name;
    string email;
public:
    Person() : name(""), email("") {}
    Person(const string &n, const string &e) : name(n), email(e) {}
    virtual ~Person() {}
    void setName(const string &n) { name = n; }
    void setEmail(const string &e) { email = e; }
    string getName() const { return name; }
    string getEmail() const { return email; }
    virtual void display() const {
        cout << left << setw(20) << ("Name: " + name) << " Email: " << email << "\n";
    }
};

class Student : public Person {
private:
    string nim;
    int year;
public:
    Student() : Person(), nim(""), year(0) {}
    Student(const string &nim_, const string &n, const string &e, int y)
        : Person(n, e), nim(nim_), year(y) {}
    void setNIM(const string &s) { nim = s; }
    void setYear(int y) { year = y; }
    string getNIM() const { return nim; }
    int getYear() const { return year; }
    void display() const {
        cout << "NIM: " << setw(12) << nim
             << " | Name: " << setw(20) << name
             << " | Email: " << setw(25) << email
             << " | Year: " << year << "\n";
    }
};

class StudentArray {
private:
    Student *arr;
    size_t capacity;
    size_t length;
    void grow() {
        size_t newcap = (capacity == 0 ? 8 : capacity * 2);
        Student *tmp = new Student[newcap];
        for (size_t i = 0; i < length; ++i) tmp[i] = arr[i];
        delete[] arr;
        arr = tmp;
        capacity = newcap;
    }
public:
    StudentArray(size_t cap = 8) : arr(NULL), capacity(cap), length(0) {
        arr = new Student[capacity];
    }
    ~StudentArray() { delete[] arr; }
    size_t size() const { return length; }
    Student& operator[](size_t i) { return arr[i]; }
    const Student& operator[](size_t i) const { return arr[i]; }
    void push_back(const Student &s) {
        if (length >= capacity) grow();
        arr[length++] = s;
    }
    bool removeAt(size_t idx) {
        if (idx >= length) return false;
        for (size_t i = idx; i + 1 < length; ++i) arr[i] = arr[i+1];
        --length;
        return true;
    }
    bool updateAt(size_t idx, const Student &s) {
        if (idx >= length) return false;
        arr[idx] = s;
        return true;
    }
    Student* dataPtr() { return arr; }
};

namespace Validation {
    bool isDigits(const string &s) {
        if (s.empty()) return false;
        for (size_t i = 0; i < s.length(); ++i) if (!isdigit((unsigned char)s[i])) return false;
        return true;
    }
    bool validNIM(const string &nim) {
        if (!isDigits(nim)) return false;
        size_t L = nim.length();
        return L >= 6 && L <= 12;
    }
    bool validName(const string &name) {
        if (name.length() < 2 || name.length() > 100) return false;
        for (size_t i = 0; i < name.length(); ++i) {
            char c = name[i];
            if (!(isalpha((unsigned char)c) || c == ' ' || c == '-' || c == '\'')) return false;
        }
        return true;
    }
    bool validEmail(const string &email) {

        if (email.empty()) return false;
        int atpos = -1;
        for (size_t i = 0; i < email.length(); ++i) {
            if (email[i] == '@') {
                if (atpos != -1) return false;
                atpos = (int)i;
            }
            if (isspace((unsigned char)email[i])) return false;
        }
        if (atpos <= 0 || atpos + 2 >= (int)email.length()) return false;
        bool dotAfter = false;
        for (size_t i = atpos + 1; i < email.length(); ++i) if (email[i] == '.') { dotAfter = true; break; }
        return dotAfter;
    }
    bool validYear(int y) {
        return y >= 1970 && y <= 2100;
    }
}

void saveToFile(const StudentArray &db, const string &filename) {
    try {
        ofstream ofs(filename.c_str());
        if (!ofs) throw runtime_error("Cannot open file for writing.");
        ofs << "nim,name,email,year\n";
        for (size_t i = 0; i < db.size(); ++i) {
            const Student &s = db[i];
            
            ofs << s.getNIM() << ",\"" << s.getName() << "\"," << s.getEmail() << "," << s.getYear() << "\n";
        }
        ofs.close();
        cout << "Saved " << db.size() << " records to " << filename << "\n";
    } catch (const exception &e) {
        cerr << "Save error: " << e.what() << "\n";
    }
}

void loadFromFile(StudentArray &db, const string &filename) {
    try {
        ifstream ifs(filename.c_str());
        if (!ifs) throw runtime_error("Cannot open file for reading.");
        string line;
        getline(ifs, line); 
        while (getline(ifs, line)) {
            if (line.empty()) continue;
            stringstream ss(line);
            string nim, name, email, yearstr;
            if (!getline(ss, nim, ',')) continue;
            if (ss.peek() == '"') {
                ss.get(); 
                getline(ss, name, '"');
                ss.get(); 
            } else {
                getline(ss, name, ',');
            }
            getline(ss, email, ',');
            getline(ss, yearstr);
            int y = atoi(yearstr.c_str());
            db.push_back(Student(nim, name, email, y));
        }
        ifs.close();
        cout << "Loaded data from " << filename << " (now " << db.size() << " records)\n";
    } catch (const exception &e) {
        cerr << "Load error: " << e.what() << "\n";
    }
}

void listAll(const StudentArray &db) {
    cout << "\n-- Daftar Mahasiswa (total: " << db.size() << ") --\n";
    for (size_t i = 0; i < db.size(); ++i) {
        cout << "[" << i << "] ";
        db[i].display();
    }
    cout << "-- end list --\n";
}

int linearSearchByNIM(const StudentArray &db, const string &nim) {
    for (size_t i = 0; i < db.size(); ++i) if (db[i].getNIM() == nim) return (int)i;
    return -1;
}

int sequentialSearchByName(const StudentArray &db, const string &substr) {
    string s = substr;
    for (size_t k = 0; k < s.size(); ++k) s[k] = (char)tolower((unsigned char)s[k]);
    for (size_t i = 0; i < db.size(); ++i) {
        string name = db[i].getName();
        for (size_t k = 0; k < name.size(); ++k) name[k] = (char)tolower((unsigned char)name[k]);
        if (name.find(s) != string::npos) return (int)i;
    }
    return -1;
}

int binarySearchByNIM(const StudentArray &db, const string &nim) {
    int l = 0, r = (int)db.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        string mid = db[m].getNIM();
        if (mid == nim) return m;
        if (mid < nim) l = m + 1; else r = m - 1;
    }
    return -1;
}

inline bool cmpNIM(const Student &a, const Student &b) { return a.getNIM() < b.getNIM(); }

void bubbleSort(StudentArray &db) {
    size_t n = db.size();
    for (size_t i = 0; i < n; ++i) {
        bool swapped = false;
        for (size_t j = 0; j + 1 < n - i; ++j) {
            if (db[j].getNIM() > db[j+1].getNIM()) {
                Student tmp = db[j]; db[j] = db[j+1]; db[j+1] = tmp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void insertionSort(StudentArray &db) {
    size_t n = db.size();
    for (size_t i = 1; i < n; ++i) {
        Student key = db[i];
        int j = (int)i - 1;
        while (j >= 0 && db[j].getNIM() > key.getNIM()) {
            db[j+1] = db[j];
            --j;
        }
        db[j+1] = key;
    }
}

void selectionSort(StudentArray &db) {
    size_t n = db.size();
    for (size_t i = 0; i < n; ++i) {
        size_t minidx = i;
        for (size_t j = i+1; j < n; ++j) if (db[j].getNIM() < db[minidx].getNIM()) minidx = j;
        if (minidx != i) {
            Student tmp = db[i]; db[i] = db[minidx]; db[minidx] = tmp;
        }
    }
}

Student inputStudentInteract() {
    string nim, name, email;
    int year = 0;

    while (true) {
        cout << "NIM (6-12 digits): "; 
        getline(cin, nim);
        if (!Validation::validNIM(nim)) cout << "Invalid NIM format. Try again.\n"; else break;
    }

    while (true) {
        cout << "Name: "; getline(cin, name);
        if (!Validation::validName(name)) cout << "Invalid name. Use letters only.\n"; else break;
    }

    while (true) {
        cout << "Email: "; getline(cin, email);
        if (!Validation::validEmail(email)) cout << "Invalid email format.\n"; else break;
    }

    while (true) {
        cout << "Year (e.g. 2021): "; string ys; getline(cin, ys);
        int tmp = atoi(ys.c_str());
        if (!Validation::validYear(tmp)) { cout << "Year out of range or invalid.\n"; continue; }
        year = tmp; break;
    }
    return Student(nim, name, email, year);
}

void printHeader() {
    cout << "\n=== MANAJEMEN DATA MAHASISWA ===\n";
}
void printComplexities() {
    cout << "\nEstimasi Time Complexity (n = number of records):\n";
    cout << "- Linear Search: O(n)\n";
    cout << "- Sequential (name substring) Search: O(n)\n";
    cout << "- Binary Search (sorted): O(log n)\n";
    cout << "- Bubble / Selection / Insertion (avg/worst): O(n^2)\n";
    cout << "- Merge Sort (not included due to simpler implementation here): O(n log n)\n";
    cout << "- File I/O (read/write): O(n)\n\n";
}

int main() {
    StudentArray db;
    const string filename = "data_mahasiswa.csv";
    ifstream testf(filename.c_str());
    if (testf) { testf.close(); loadFromFile(db, filename); }

    while (true) {
        printHeader();
        cout << "1) Tambah Data\n2) Edit Data (by index)\n3) Hapus Data (by index)\n4) Tampilkan Semua\n";
        cout << "5) Cari Linear (by NIM)\n6) Cari Binary (by NIM - requires sorted)\n7) Cari Sequential (nama substring)\n";
        cout << "8) Urutkan (Bubble)\n9) Urutkan (Insertion)\n10) Urutkan (Selection)\n";
        cout << "11) Simpan ke File\n12) Muat dari File (append)\n13) Estimasi Time Complexity\n0) Keluar\n";
        cout << "Pilih: ";
        string choice;
        getline(cin, choice);

        if (choice == "1") {
            try {
                Student s = inputStudentInteract();
                if (linearSearchByNIM(db, s.getNIM()) != -1) {
                    cout << "NIM sudah ada. Tambah dibatalkan.\n";
                } else db.push_back(s);
            } catch (const exception &e) { cerr << "Error: " << e.what() << "\n"; }
        } else if (choice == "2") {
            listAll(db);
            cout << "Masukkan index: "; string idxs; getline(cin, idxs);
            int idx = atoi(idxs.c_str());
            if (idx < 0 || idx >= (int)db.size()) { cout << "Index invalid.\n"; continue; }
            cout << "Masukkan data baru untuk index " << idx << ":\n";
            Student s = inputStudentInteract();
            if (db.updateAt((size_t)idx, s)) cout << "Updated.\n"; else cout << "Update gagal.\n";
        } else if (choice == "3") {
            listAll(db);
            cout << "Masukkan index: "; string idxs; getline(cin, idxs);
            int idx = atoi(idxs.c_str());
            if (!db.removeAt((size_t)idx)) cout << "Index invalid.\n"; else cout << "Removed.\n";
        } else if (choice == "4") {
            listAll(db);
        } else if (choice == "5") {
            cout << "Masukkan NIM: "; string nim; getline(cin, nim);
            int pos = linearSearchByNIM(db, nim);
            if (pos == -1) cout << "Not found.\n"; else { cout << "Found at index " << pos << ": "; db[pos].display(); }
        } else if (choice == "6") {
            cout << "Note: binary search requires array sorted by NIM.\n";
            cout << "Masukkan NIM: "; string nim; getline(cin, nim);
            int pos = binarySearchByNIM(db, nim);
            if (pos == -1) cout << "Not found (maybe not sorted).\n"; else { cout << "Found at index " << pos << ": "; db[pos].display(); }
        } else if (choice == "7") {
            cout << "Masukkan substring nama: "; string s; getline(cin, s);
            int pos = sequentialSearchByName(db, s);
            if (pos == -1) cout << "Not found.\n"; else { cout << "Found at index " << pos << ": "; db[pos].display(); }
        } else if (choice == "8") {
            bubbleSort(db); cout << "Sorted with Bubble.\n";
        } else if (choice == "9") {
            insertionSort(db); cout << "Sorted with Insertion.\n";
        } else if (choice == "10") {
            selectionSort(db); cout << "Sorted with Selection.\n";
        } else if (choice == "11") {
            saveToFile(db, filename);
        } else if (choice == "12") {
            loadFromFile(db, filename);
        } else if (choice == "13") {
            printComplexities();
        } else if (choice == "0") {
            cout << "Simpan sebelum keluar? (y/n): "; string ans; getline(cin, ans);
            if (!ans.empty() && (ans[0] == 'y' || ans[0] == 'Y')) saveToFile(db, filename);
            break;
        } else {
            cout << "Pilihan tidak valid.\n";
        }
        cout << "Tekan Enter untuk lanjut..."; string tmp; getline(cin, tmp);
    }

    return 0;
}


