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
	if (n == 1){
		return (1);
		cout << n;
	}else{
		return (n*(n+1)/2);
		cout << n;
	}
}
