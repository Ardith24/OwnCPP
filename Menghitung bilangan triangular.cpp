#include <iostream>
using namespace std;

int main(){
	int bil;
	int hasil;
	
	cout << "Menghitung bilangan triangular \n";
	cout << endl;
	
	cout << "Masukan bilangan: ";
	cin  >> bil;
	
	for (int n=bil; n>=1; n--){
		hasil=hasil+n;
	}
	cout << hasil;
}
