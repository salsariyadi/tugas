#include <iostream>

using namespace std;

    const float phi = 3.14;
    float r, luas(), keliling(), t, volume();
    int pilih;
    char pilih2;
    
    int main(){
    do{
    cout << "Hitung Lingkaran ==============" << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "2. Keliling Lingkaran" << endl;
    cout << "3. Volume Tabung" << endl;
    cout << "Pilih : "; cin >> pilih;
    cout << endl ;
    switch (pilih)
        {
        case 1 :
            cout << "Jari-jari : "; cin >> r;
            cout << endl;
            cout << "Luas Lingkaran : " << luas() << endl;
        break;
        case 2 :
            cout << "Jari-jari : "; cin >> r;
            cout << endl;
            cout << "Keliling Lingkaran : " << keliling() << endl;
        break;
        case 3 :
            cout << "Jari-jari : "; cin >> r;
            cout << endl;
            cout << "Tinggi    : "; cin >> t;
            cout << endl;
            cout << "Volume Tabung: " << volume() << endl;
        break;
        default :
            cout << "Tidak Ada Pilihan" << endl;
        }
        cout << "Ulangi Program? (y/n) : "; cin >> pilih2;
        cout << endl;
    }while (pilih2 == 'Y' || pilih2 == 'y' );
    }float luas() {
        float l = phi*r*r;
        return l;
    }float keliling() {
        float k = 2*phi*r;
        return k;
    }float volume() {
        float v = phi*r*r*t;
        return v;
    }
