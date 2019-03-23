#include <iostream>
using namespace std;

int C, F, pilih, ce;
	
	void suhuawal(){
		cout << "KONVERSI SUHU" << endl;
		cout << "1.Celcius=>Fahrenheit" << endl;
		cout << "Fahrenheit" << endl;
		cout << "Kelvin" << endl;
		cout << "Reamur" << endl;
		cout << "Pilihan Anda";
		cin  >> pilih;
		
		if (pilih=1){
			celfah();
		}
		else if (pilih=2){
			cout << "oke";
		}
	}
	
	void celfah(){
		cout << "Masukan derajat Celcius = ";
		cin  >> C;
		F=1.8*C+32;
		cout << "Konversi ke Fahrenheit adalah " << F;
	}
	
	int main(){
		suhuawal();
	}
