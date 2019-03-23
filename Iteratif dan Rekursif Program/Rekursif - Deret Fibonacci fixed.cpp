#include <iostream>
using namespace std;

int fibo(int n);

int main(){
	int bil, hasil;
	cout << "Masukan bilangan ke = ";
	cin  >> bil;
	
	cout << endl;
	
	hasil=fibo(bil);
	cout << "Fibonacci = " << hasil;
}

int fibo(int n){
	if (n == 0){
		return (0);
	}else if (n == 1){
		return (1);
	}else{
		return (fibo(n-1)+fibo(n-2));
	}
}
