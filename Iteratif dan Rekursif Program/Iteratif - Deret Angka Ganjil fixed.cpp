#include <iostream>
using namespace std;

int tambah(int n);

int main(){
	int a, jumlah=0, bil=1;
	
	cout << "Masukan deret ke-n = ";
	cin  >> a;
	
	//menghitung deret jumlah
	for(bil; bil<=a; bil++){
		jumlah=jumlah+(2*bil-1);
	}
	
	//menampilkan proses jumlah
	for(int i=1; i<=a; i++){
		cout << tambah(i) << "+";
	}
	cout << endl;
	cout << "Jumlah deret adalah = " << jumlah;
}

int tambah(int n){
	if (n == 1){
		return (1);
	}else{
		return (2*n-1);
	}
}
