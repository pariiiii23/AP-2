#include <iostream>
using namespace std;

class ContohAkses {
    private:
        int privateVar;

    protected:
        int protectedVar;
    
    public:
        int publicVar;

        // Constructor
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl; 
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// Inheritance (pewarisan), class turunan
class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
        // cout << privateVar << endl; // error
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

int main() {
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "\n Akses dari luar class : " << endl;
    // cout << obj.privateVar << endl; 
    // cout << obj.protectedVar << endl;
    cout << obj.publicVar << endl;

     cout << "\n Akses dari class turunan : " << endl;
     Turunan tur;
     tur.aksesProtected();
}