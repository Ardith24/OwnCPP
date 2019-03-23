#include <iostream>
using namespace std;

int perpangkatan(int a, int n);

int main (){
	int angka, pangkat, hasil;
	cout << "Masukan angka = ";
	cin  >> angka;
	cout << "Masukan pangkat = ";
	cin  >> pangkat;
	
	
	hasil=perpangkatan(angka, pangkat);
	cout << "Hasil dari " << angka << " pangkat " << pangkat << " adalah = "<< hasil;
	
}

int perpangkatan(int a, int n){
	if(n==0){
		return (1);
	}else{
		return (a*perpangkatan(a, n-1));
	}
}
