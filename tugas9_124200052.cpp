#include <iostream>

using namespace std;

int main()
{
	float rata2, rataan = 0;
    int x = 0, i, i2, max2 = 0, max = 0, min = 0, selisih[999] = {0}, bil[x];
    
    cout << "Masukkan banyak angka : " ; cin  >> x ;
    for (int i = 0; i < x; i++){
        cout << "Bilangan ke-" << i + 1 <<": "; cin  >> bil[i];
    }   cout << endl ;
        cout << "_______HASIL_______" << endl ;
        cout << "Deret       : ";
        for (i = 0; i < x; i++)
            cout << bil[i] << " ";
        max = bil[0];
        for (i = 0; i < x; i++){
            if (max < bil[i]){
                max = bil[i];
            }else min = bil [0];
                if (min > bil [i]){
                    min = bil [i];
                }
        }
    for(i = 0; i < x; i++){
        rataan = rataan + bil[i];
    }rata2 = rataan / x;
    x = x - 1;
    for(i = 0; i < x; i++){
        i2 = i + 1;
        if (i < x) selisih[i] = bil[i] - bil[i2];
        else selisih[i] = 0;
        if (selisih[i] < 0) selisih[i] = selisih[i] * (-1);
        max2 = selisih[0];
        if (selisih[i] > max2) {
            max2 = selisih[i];
        }
    }
    cout << endl;
    cout << "Maksimum    : " << max << endl;
    cout << "Minimum     : " << min << endl;
    cout << "Rata-rata   : " << rata2 << endl ;
    cout << "Selisih max : " << max2 << endl ;
    return 0;
}
