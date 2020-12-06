#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int pilih, panjang, lebar, tinggi, x, y, a, b, c;
	
	cout << "Gambar Bangun Datar ==============" << endl;
	cout << "1. Kotak bolong" << endl;
	cout << "2. Segitiga" << endl;
	cout << "Pilih : "; cin >> pilih;
	
	switch (pilih){
	
	case 1: {
		cout << "Panjang	: "; cin >> panjang;
		cout << "Lebar	: "; cin >> lebar;
			for (x = 1; x <= panjang; x++){
				cout << endl;
				for (y = 1; y <= lebar; y++){
					cout << " ";
					if (x == 1 || x == panjang || y == 1 || y == lebar){
					cout << "*";
				}else {
					cout << " ";}
				}
			} break;
		}
		
	case 2: {
		cout << "Tinggi : "; cin >> tinggi;
            for (a = 1; a <= tinggi; a++){
            c = a;
                for (b = 1; b <= a; b++){
                    cout << c ;
                    cout << " ";
                    c = c + tinggi - b;
                } cout << "\n";
            }break; 
		}
}
}
