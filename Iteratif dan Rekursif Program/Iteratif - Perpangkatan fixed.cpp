#include <iostream>
using namespace std;

int pangkat(int a, int b);

int main(){
	int a, b;
	
	cout << "Masukan angka = ";
	cin  >> a;
	
	cout << "Masukan pangkat = ";
	cin  >> b;
	
	cout << endl;
	cout << a << " pangkat " << b << " adalah = " << pangkat(a,b);
}

int pangkat(int a, int b){
	int jumlah=1;
	for(int bil=1; bil<=b; bil++){
		jumlah=jumlah*a;
	}
	return jumlah;
}
