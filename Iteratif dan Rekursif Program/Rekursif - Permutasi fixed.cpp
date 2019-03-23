#include <iostream>
using namespace std;

int faktorial_n(int n);
int permutasi(int n, int r);

int main(){
	int n, r, hasil;
	
	cout << "Nilai n = ";
		cin  >> n;
	cout << "Nilai r = ";
		cin  >> r;
	cout << permutasi(n,r);
		
}

//faktorial n
int faktorial_n (int n){
	if (n==1){
		return(1);
	}else{
		return (n * faktorial_n(n-1));
	}
}

int permutasi(int n, int r){
	if (n < r){
		return (0);
	}else{
		return (faktorial_n(n)/faktorial_n(n-r));
	}
}
