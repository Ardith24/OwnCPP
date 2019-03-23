#include <iostream>
using namespace std;

int main (){

	//deklarasi variabel
	int Penjumlahan, Pengurangan, Pembagian, Perkalian, pilihan;
	int a=5;
	int b=3;

	//input
	cout << "Masukan bilangan pertama = " << a << endl;
	cout << "Masukan bilangan kedua   = " << b << endl;

	cout << endl;
	cout << "Menu Matematika" << endl;
	cout << endl;

	//output option
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Pembagian  " << endl;
	cout << "4. Perkalian  " << endl;

	cout << "Masukan pilihan Anda = ";
	cin  >> pilihan;
 
	//conditional
	if (pilihan == 1){
		Penjumlahan = a+b;
		cout << "Hasil operasi aritmatika = " << Penjumlahan << endl;
		cout << endl;
		cout << "=================================" << endl;
		cout << "|   this program created by:    |" << endl;
		cout << "|       Ardith Lutfiawan        |" << endl;
		cout << "=================================" << endl;	
	} else if (pilihan == 2){
		Pengurangan = a-b;
		cout << "Hasil operasi aritmatika = " << Pengurangan << endl;
		cout << endl;
		cout << "=================================" << endl;
		cout << "|   this program created by:    |" << endl;
		cout << "|       Ardith Lutfiawan        |" << endl;
		cout << "=================================" << endl;
	} else if (pilihan == 3){
		Pembagian = a/b;
		cout << "Hasil operasi aritmatika = " << Pembagian   << endl;
		cout <<  Pembagian; 
		cout << endl;
		cout << "=================================" << endl;
		cout << "|   this program created by:    |" << endl;
		cout << "|       Ardith Lutfiawan        |" << endl;
		cout << "=================================" << endl;
	} else if (pilihan == 4){
		Perkalian = a*b;
		cout << "Hasil operasi aritmatika = " << Perkalian   << endl;
		cout << endl;
		cout << "=================================" << endl;
		cout << "|   this program created by:    |" << endl;
		cout << "|       Ardith Lutfiawan        |" << endl;
		cout << "=================================" << endl;
	}
}