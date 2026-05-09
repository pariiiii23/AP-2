#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct alamat {
    string jalan;
    string kota;
    int kodepos;
};

struct mahasiswa {
    string nama;
    int umur;
    float ipk;
    alamat alamat; //nested struct
};

int main(){
    system("cls");
    mahasiswa mhs1;
    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodepos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << ", " << mhs1.alamat.kota << ", " << mhs1.alamat.kodepos << endl;

    vector<mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout <<"Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Nama: ";
        getline(cin, mhs1.nama);

        cout << "Umur: ";
        cin >> mhs1.umur;

        cout << "IPK: ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

        for (int i = 0; i < n; i++) {
            cout << "Mahasiswa " << i + 1 << endl;
            cout << "Nama: " << mahasiswa[i].nama << endl;
            cout << "Umur: " << mahasiswa[i].umur << endl;
            cout << "IPK: " << mahasiswa[i].ipk << endl;
        }
}