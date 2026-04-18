#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> Mahasiswa = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};
    for(int i = 0; i < Mahasiswa.size(); i++){
    cout << Mahasiswa[i] << endl;
    }
    Mahasiswa.push_back("Houra");
    Mahasiswa.pop_back();
    Mahasiswa.erase(Mahasiswa.begin() + 1);

    for(int i = 0; i < Mahasiswa.size(); i++){
    cout << Mahasiswa[i] << endl;
    }
}