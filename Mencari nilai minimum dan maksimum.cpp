#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int i, angka, jumlah, max, min;

    cout << "Mencari nilai maximum dan minimum. (jumlah angka ditentukan)" << endl;
    cout << endl;

    cout << "Masukan jumlah angka: ";
    cin >> jumlah;
    cout << endl;

    for (int i=1; i<=jumlah; i++)
    {

    cout << "Masukan angka = ";
    cin >> angka;

    if (i==1){

    min=angka;
    max=angka;

    }
    else if (max<angka){
        max=angka;
    }
    else if (min>angka){
        min=angka;
    }
    else {}
    }

    cout << endl;
    cout << "nilai min = " << min << endl;
    cout << "nilai max = " << max << endl;

    return 0;
}
