#include <iostream>
using namespace std;

string R[10]={"I","II","III","IV","V","VI","VII","VIII","IX","X"};
int bil;

int main (){
	cout << "Masukan angka = ";
	cin >> bil;
	
	//seleksi kondisi if
	if(bil==1){
		cout << "Konversi angka = " << R[0];
	}
	else if(bil==2){
		cout << "Konversi angka = " << R[1];
	}
	else if(bil==3){
		cout << "Konversi angka = " << R[2];
	}
	else if(bil==4){
		cout << "Konversi angka = " << R[3];
	}
	else if(bil==5){
		cout << "Konversi angka = " << R[4];
	}
	else if(bil==6){
		cout << "Konversi angka = " << R[5];
	}
	else if(bil==7){
		cout << "Konversi angka = " << R[6];
	}
	else if(bil==8){
		cout << "Konversi angka = " << R[7];
	}
	else if(bil==9){
		cout << "Konversi angka = " << R[8];
	}
	else if(bil==10){
		cout << "Konversi angka = " << R[9];
	}
	else {
		cout << "Kesalahan";
	}
	//seleksi kondisi if
	
	for(int i=0;i<=bil;i++){
		
	}
}
