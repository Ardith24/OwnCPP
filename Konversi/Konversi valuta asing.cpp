#include <iostream>

using namespace std;

int main(){
int Dollar, Rupiah;

    cout << "==========================================================" << endl;
    cout << "|              Mengkonversi valuta asing                 |" << endl;
    cout << "==========================================================" << endl;

    cout << "Masukan jumlah mata uang Dollar = ";
    cin  >> Dollar;

    Rupiah=Dollar*11090;

    cout << endl;

    cout << "Jumlah dalam Rupiah" << Rupiah << endl;

    return 0;
}
