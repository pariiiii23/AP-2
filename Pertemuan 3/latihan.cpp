#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, bmi;
    system("cls");
    
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;

    bmi = berat / (tinggi * tinggi);

    cout << "BMI Anda adalah: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori berat badan: berat badan kurang" << endl;
    } else if (bmi <= 18.5 && bmi < 25) {
        cout << "Kategori berat badan: berat badan normal" << endl;
    } else if (bmi <= 25 && bmi < 30) {
        cout << "Kategori berat badan: berat badan berlebih" << endl;
    } else {
        cout << "Kategori berat badan: Obesitas" << endl;
    }
}