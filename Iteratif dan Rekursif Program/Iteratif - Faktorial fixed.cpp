#include <iostream>
using namespace std;

/*
int fak(int n);
int kali(int m);

int main (){
	int n;
	
	cout << "Masukan nilai n = ";
	cin  >> n;
	
	for(int i=1; i<=n; i++){
		cout << kali(i) << "*";
	}
	
	cout << endl;
	cout << "Nilai faktorial dari " << n << "! adalah = " << fak(n);
}

int kali(int m){
	if (m == 1){
		return (1);
	}else{
		return (kali(m-1)+1);
	}
}

int fak(int n){
	int hasil=1;
	for(int a=n; a>=1; a--){
		hasil=hasil*a;
	}
}
*/

//deklarasi f(n)
int fak(int n);

//output
int main(){
	int angka;
	
	cout << "Masukan nilai n (faktorial) = ";
	cin  >> angka;
	
	cout << "Nilai faktorial dari " << angka << " adalah = " << fak(angka);
}

//realisasi f(n)
int fak(int n){
	int hasil=1;
	for(int i=1; i<=n; i--){
		hasil=hasil*i;
	}
}
















