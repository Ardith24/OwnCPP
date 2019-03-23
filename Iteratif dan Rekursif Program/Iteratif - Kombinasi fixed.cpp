#include <iostream>
using namespace std;

int main(){
	int n, r, k, j, hasil_n, hasil_r, hasil_k, hasil_komb;
	
	cout << "Masukan nilai n = ";
	cin  >> n;
	
	cout << "Masukan nilai r = ";
	cin  >> r;
	
	
	//iteratif nilai n!
	hasil_n=1;
	for(int i=n; i>=1; i--){
		hasil_n=hasil_n*i;
		cout << hasil_n << "*";
	}
	cout << "Nilai " << n << "! adalah = " << hasil_n;
	
	cout << endl;
	
	//iteratif nilai r!
	hasil_r=1;
	for(int l=r; l>=1; l--){
		hasil_r=hasil_r*l;
	}
	
	//iteratif nilai (n-r)!
	k=n-r;
	hasil_k=1;
	for(int j=k; j>=1; j--){
		hasil_k=hasil_k*j;
	}
	cout << "Nilai (" << n << "-" << r << ")! atau "<< k << "! adalah = "<< hasil_k;
	
	cout << endl;
	
	//hasil
	hasil_komb=hasil_n/(hasil_r*hasil_k);
	cout << "Nilai kombinasi n!/n!(n-r)! " << "atau " << n <<"!/" << n << "!(" << n << "-" << r << ")!" << " adalah = " << hasil_komb;
	
}
