#include <iostream>
using namespace std;

//deklarasi fungsi
int tambah(int n);

int main(){
	int angka, hasil;
	cout << "Masukan angka = ";
	cin  >> angka;
	
	cout << "Penjumlahan deret angkanya adalah = " << tambah(angka);
}

int tambah(int n){
	if (n == 2){
		return (2);
	}else{
		return (n*(n+2)/4);
	}
}
