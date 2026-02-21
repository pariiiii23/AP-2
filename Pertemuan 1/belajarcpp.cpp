#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    string nama;
    char kom, jk;
    int nim;
    float ip;

    cout << "Masukkan Nama : "; getline (cin, nama);
    cout << "Masukkan KOM : "; cin >> kom;
    cout << "Masukkan NIM : "; cin >> nim;
    cout << "Masukkan IP : "; cin >> ip;
    cout << "Masukkan jenis kelamin (L/P) : "; jk = getche();
    /*Ini untuk output*/
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    //cout << jk << endl;
    putchar(jk);
    getch();
}