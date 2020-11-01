#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	string username;
	int password, matkul, harian_1, uts_1, uas_1, harian_2, uts_2, uas_2;
	float nilai_1, nilai_2;
	
	cout << "====== Login Akun ======";
	cout << endl;
	cout << "Username : "; cin >> username;
	cout << endl;
	cout << "Password : "; cin >> password;
	cout << "========================";
	cout << endl; cin.ignore();
	
	if (username == "javachip" && password == 8080) 
	{ cout << "Login Berhasil!" << endl; }
	else if (username != "javachip" && password == 8080) 
	{ cout << "Username Anda Salah!" << endl; }
	else if (username == "javachip" && password != 8080) 
	{ cout << "Password Anda Salah!" << endl; }
	else if (username != "javachip" && password != 8080) 
	{ cout << "Username dan Password Anda Salah!" << endl; }
	cout << endl; cin.ignore();
	
	cout << "Input Nilai Mata Kuliah" << endl;
	cout << "1. Algoritma dan Pemrograman" << endl;
	cout << "2. Kalkulus" << endl;
	cout << "Pilih : "; cin >> matkul;
	cout << endl; cin.ignore();
	
	switch (matkul) {
	case 1 :
	cout << "Nilai Harian : "; cin >> harian_1;
	cout << "Nilai UTS : "; cin >> uts_1;
	cout << "Nilai UAS : "; cin >> uas_1;
	nilai_1 = (harian_1 + uts_1 + uas_1) / 3;
	if (nilai_1 >= 80)
	{ cout << "Anda lulus Algoritma dan Pemrograman dengan nilai " << nilai_1 << endl; }
	else if (nilai_1 < 80)
	{ cout << "Anda tidak lulus Algoritma dan Pemrograman dengan nilai " << nilai_1 << endl; }
	break;
	
	case 2 :
	cout << "Nilai Harian : "; cin >> harian_2;
	cout << "Nilai UTS : "; cin >> uts_2;
	cout << "Nilai UAS : "; cin >> uas_2;
	nilai_2 = (harian_2 + uts_2 + uas_2) / 3;
	if (nilai_2 >= 80)
	{ cout << "Anda lulus Algoritma dan Pemrograman dengan nilai " << nilai_2 << endl; }
	else if (nilai_2 < 80)
	{ cout << "Anda tidak lulus Algoritma dan Pemrograman dengan nilai " << nilai_2 << endl; }
	break; 
	
	default :
		cout << "Input Anda Salah!" << endl; }
	
	
}
