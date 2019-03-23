#include <iostream>
using namespace std;

int pangkat(int a, int b){
    int hasil = a;
    for (int i = 1; i < b; i++){
      hasil = hasil * a;
    }
    return hasil;
}

int main(){
    int a, b;
    cout << "Masukan angka: ";
    cin  >> a;
    cout << "Pangkat: ";
    cin  >> b;
    cout << "Hasil iterasi: " << pangkat(a,b) << endl;
}
