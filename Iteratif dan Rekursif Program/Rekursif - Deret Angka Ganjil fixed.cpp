#include <iostream>
using namespace std;

//deklarasi fungsi
int tambah(int n);
int jumlah(int m);

int main(){
	int angka;
	cout << "Masukan angka = ";
	cin  >> angka;
	
	for(int i=1; i<=angka; i++){
		cout << tambah(i) << " + ";
	}
	cout << "0 = " << jumlah(angka);
}

int tambah(int n){
	if (n == 1){
		return (1);
	}else{
		return (2*n-1);
	}
}

int jumlah(int m){
	if (m==1){
		return(1);
	}else{
		return ((2*m)-1+jumlah(m-1));
	}
}
