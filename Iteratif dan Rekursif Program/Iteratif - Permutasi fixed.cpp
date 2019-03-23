#include <iostream>
using namespace std;

int main(){
	int n, r, k, j, hasil_n, hasil_r, hasil_k, hasil_perm;
	
	cout << "Masukan nilai n = ";
	cin  >> n;
	
	cout << "Masukan nilai r = ";
	cin  >> r;
	
	hasil_n=1;
	for(int i=n; i>=1; i--){
		hasil_n=hasil_n*i;
	}
	cout << "Nilai " << n << "! adalah = " << hasil_n;
	
	cout << endl;
	
	k=n-r;
	hasil_k=1;
	for(int j=k; j>=1; j--){
		hasil_k=hasil_k*j;
	}
	cout << "Nilai (" << n << "-" << r << ")! atau "<< k << "! adalah = "<< hasil_k;
	
	cout << endl;
	
	hasil_perm=hasil_n/hasil_k;
	cout << "Nilai permutasi dari n!/(n-r)! adalah = " << hasil_perm;
}
