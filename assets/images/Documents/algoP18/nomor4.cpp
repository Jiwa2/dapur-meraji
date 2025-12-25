#include <iostream>
#include <cstdlib>  
using namespace std;

int main() {
 
    system("mkdir arsip");


    system("move data_mahasiswa.txt arsip");

    cout << "File data_mahasiswa.txt telah dipindahkan ke folder arsip.\n";
    return 0;
}

