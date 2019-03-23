#include <iostream>
using namespace std;

int suku, a, b, c;

int main(){
	cout<<"Membuat Deret Fibonacci\n";
   	cout<<"Masukkan nilai suku ke-: ";
	   cin>>suku;
   	
	cout<<"Bilangannya adalah: \n";
    	
   	a=0;
	b=1;
    	
   	cout<< a<< endl<< b <<endl;
    	
	for(int i=0; i<=suku; i++){
	    c = a + b;
    	a = b;
    	b = c;
     cout << c << endl;
    }
    return 0;
}
