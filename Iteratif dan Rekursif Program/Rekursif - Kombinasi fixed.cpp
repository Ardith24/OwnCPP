/*Program Rekursif Kombinasi - Ardith Lutfiawan*/

#include <iostream>
using namespace std;

//deklarasi fungsi
int faktorial_n(int n);
int faktorial_r(int r);
int faktorial_h(int h);

//proses yang akan tampil pada layar
int main(){
	//deklarasi tipe data, a adalah untuk nilai n, b untuk nilai r, dan t untuk nilai (n-r) yang disimpan menjadi satu tipe data
	int a, b, t, hasil;

	//input nilai n
	cout << "Masukan nilai n = ";
	cin  >> a;
	//input nilai r
	cout << "Masukan nilai r = ";
	cin  >> b;

	//setelah mengetahui nilai a(sebagai n) dan r(sebagai r) maka nilai yang baru akan disimpan di t
	t=a-b;

	//hasil akan diperoleh dari rumus n!/r!(n-r)!
	hasil=faktorial_n(a)/(faktorial_r(b)*faktorial_h(t));

	//output nilai kombinasi dari n dan r
	cout << faktorial_n(a);
	cout << endl;
	cout << faktorial_r(b);
	cout << endl;

	cout << "Kombinasi dari " << a << " dan " << b << " adalah = " << hasil;


}

//realisasi fungsi

//menghitung faktorial n
int faktorial_n(int n){
	if (n==1){
		//cout << n ;
		//cout << endl;
		return (1);
	}else{
		//cout << n << "*";
		return (n*faktorial_n(n-1));
	}
}

//menghitung faktorial r
int faktorial_r(int r){
	if (r==1){
		cout << r;
		cout << endl;
		return (1);
	}else{
		cout << r << "*";
		return (r*faktorial_r(r-1));
	}
}

//menghitung faktorial n-r
int faktorial_h(int h){
	if (h==1){
		return (1);
	}else{
		return (h*faktorial_r(h-1));
	}
}
