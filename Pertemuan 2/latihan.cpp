#include <iostream>
using namespace std;

int main() {
    float l, volume, r, pi = 3.14;

    cout << "Masukkan jari-jari lingkaran : "; cin >> r;
    
    volume = (4.0 / 3.0) * pi * (r * r * r);
    l = (4.0 * pi * (r * r));

    cout << "Volume nya adalah : " << volume << endl;
    cout << "Luas permukaannya adalah : " << l << endl;

}
   