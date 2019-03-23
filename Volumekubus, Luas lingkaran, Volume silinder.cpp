#include<iostream>
using namespace std;

int main (){
    int volume_kubus, luas_lingkaran, volume_silinder, pilihan, s, r, t;

    cout << "Anda ingin menghitung apa?" << endl;
    cout << "1. Menghitung volume kubus" << endl;
    cout << "2. Menghitung luas lingkaran" << endl;
    cout << "3. Menghitung volume silinder" << endl;

    cout << endl;

    cout << "Masukan pilihan Anda = ";
    cin  >> pilihan;

    switch (pilihan){
        case 1 :
            cout << "Masukan panjang sisi kubus = ";
            cin  >> s;
            volume_kubus = s*s;
            cout << endl;
            cout << "Kita bisa menghitungnya dengan rumus = s*s" << endl;
            cout << "Volume kubus adalah = " << volume_kubus << endl;
            break ;
        case 2 :
            cout << "Masukan jari-jari = ";
            cin  >> r;
            luas_lingkaran = 3.14*r*r;
            cout << endl;
            cout << "Kita bisa menghitungnya dengan rumus = 3.14*r*r" << endl;
            cout << "Luas lingkaran adalah= " << luas_lingkaran << endl;
            break ;
        case 3 :
            cout << "Masukan jari-jari = ";
            cout << endl;
            cin  >> r;
            volume_silinder = 3.14*r*r*t;
            cout << "Masukan tinggi = ";
            cin  >> t;
            cout << endl;
            cout << "Kita bisa menghitungnya dengan rumus = 3.14*r*r*t" << endl;
            cout << "Volume silinder adalah = " << volume_silinder << endl;
            break ;
        default:
            cout << "Kesalahan";
            break ;
    }
}