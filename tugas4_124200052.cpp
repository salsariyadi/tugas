#include <iostream>
#include <iomanip>
using namespace std;
main ()
{
	int hasil, x, y, operasi;
	
	cout << "1.Perkalian" << endl;
	cout << "2.Perpangkatan" << endl;
	cout << "Pilih = "; cin >> operasi;
	cout << endl;
	switch(operasi){
		case 1 :
			cout << "Input angka X = "; cin >> x;
			cout << endl;
			cout << "Input angka Y = "; cin >> y;
			cout << endl;
			
			hasil = 0;
			for (int ulang = 1; ulang<=x; ulang++){
				hasil += y;
				if(ulang !=x){
					cout << y << "+";
				}else{
					cout << y << "=" <<hasil;
				}
			}
		break;
		
		case 2 :
			cout << "Input angka X = "; cin >> x;
			cout << endl;
			cout << "Input angka Y = "; cin >> y;
			cout << endl;
			
			hasil=1;
			
			for(int ulang=1; ulang<=x; ulang++){
				hasil *=y;
				if(ulang !=y){
					cout << y<< "x";
				}else{
					cout << setprecision (999999)<< y << "=" << hasil;
				}
			}
		break;
		
		default :
			cout <<"Salah input!";
		break;
	}
}
