#include <iostream>

using namespace std;

int main(){
    int Tinggi;

    cout << "Masukan tinggi langit (km)= ";
    cin  >> Tinggi;

    if (10<=Tinggi<=40){
        cout << "Tergolong jenis Troposper";
	}
    else if (40<=Tinggi<=70){
        cout << "Tergolong jenis Stratosper";
    }
    else if (70<=Tinggi<=100){
        cout << "Tergolong jenis Termosfer";
	}
}
