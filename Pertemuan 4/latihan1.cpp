#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i;

    system("cls");

    cout << "Masukkan Kalimat : ";
    getline(cin, kalimat);

    for (i = 0; i < kalimat.length(); i++) {
        char c = kalimat[i];
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {

            kalimat[i] = toupper(c);
        }
        
    }

    cout << "Kalimat vokal huruf kapital : " << kalimat << endl;
}