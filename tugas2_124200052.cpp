#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	int ayah, ibu, anak1, anak2, bantuan_ayah, bantuan_ibu, bantuan_anak1, bantuan_anak2, hari, x;
	
	cout << "Umur Ayah	: " ; cin >> ayah;
	if (ayah>20)
	{bantuan_ayah = 30000;}
	else if (12<=ayah>=20)
	{bantuan_ayah = 20000;}
	else if (ayah<=12)
	{bantuan_ayah = 15000;}
	
	cout << "Umur Ibu	: " ; cin >> ibu;
	if (ibu>20)
	{bantuan_ibu = 30000;}
	else if (12<=ibu>=20)
	{bantuan_ibu = 20000;}
	else if (ibu<=12)
	{bantuan_ibu = 15000;}
	
	cout << "Umur Anak 1	: " ; cin >> anak1;
	if (12<=anak1>=20)
	{bantuan_anak1 = 20000;}
	else if (anak1>20)
	{bantuan_anak1 = 30000;}
	else if (anak1<=12)
	{bantuan_anak1 = 15000;}
	
	cout << "Umur Anak 2	: " ; cin >> anak2;
	if (anak2<=12)
	{bantuan_anak2 = 15000;}
	else if (anak2>20)
	{bantuan_anak2 = 30000;}
	else if (12<=anak1>=20)
	{bantuan_anak1 = 20000;}


	x = (bantuan_ayah + bantuan_ibu + bantuan_anak1 + bantuan_anak2) * 30;
	cout << "Tagihan satu bulan adalah Rp." << x << endl;
	
}
