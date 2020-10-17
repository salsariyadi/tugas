#include<iostream>
using namespace std;
main ()
{
	char nama [50];
	int nim, uts, uas, sum;
	
	cout<< "Nama			: "; cin.getline(nama, sizeof(nama));
	cout<< "NIM			: "; cin>> nim;
	cout<< "Nilai UTS	: "; cin>> uts;
	cout<< "Nilai UAS	: "; cin>> uas;
	
	sum = (uts + uas) / 2;
	
	cout<< "Saya " << nama << ", NIM " << nim << endl;
	cout<< "Nilai akhir saya "<< sum; 
}
