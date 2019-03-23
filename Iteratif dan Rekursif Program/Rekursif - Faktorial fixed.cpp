#include <iostream>
using namespace std;

/*
//deklarasi fungsi  
int faktorial(int n);

int main(){
	int angka, hasil;
	cout << "Menghitung faktorial dari = ";
	cin  >> angka;
	
	hasil = faktorial(angka);
	cout << "\nHasil dari " << angka << "! adalah = " << hasil << endl;
}


//realisasi fungsi
int faktorial(int n){
	if (n == 1){
		cout << n;
		return (1);
	}else{
		cout << n << "*";
		return (n * faktorial(n-1));
	}
}*/


//deklarasi fungsi
int faktorial(int n);

//output pada layar
int main(){
	int n;
	
	cout << "Masukan nilai n = ";
	cin  >> n;
	cout << "Nilai faktorial = " << faktorial(n);
}

//realisasi fungsi (rumus)
int faktorial(int n){
	if(n==1){
		return (1);
	}else{
		return (n*faktorial(n-1));
	}
}





















