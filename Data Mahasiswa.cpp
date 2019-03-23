#include <iostream>
using namespace std;

struct Mahasiswa{
	string Nama;
	string Alamat;
	double Telp;
}data_mahasiswa[100];

int main (){
	int i, j;
	
	cout << "Berapa Data Mahasiswa = ";
	cin  >> j;
	cout << endl;
	
	for (i=0; i<j; i++){
		cout << "Mahasiswa ke-" << i+1 << endl;
		cout << "Nama Anda = ";
		cin  >>	data_mahasiswa[i].Nama;
		cout << "Masukan Alamat Anda= ";
		cin  >> data_mahasiswa[i].Alamat;
		cout << "No.Telp = ";
		cin  >> data_mahasiswa[i].Telp;
		
		cout << endl;
		cout << endl;
	}
		
	for (i=0; i<j; i++){
		cout << "Data Mahasiswa ke-" << i+1 << endl;
		cout << "Nama = " << data_mahasiswa[i].Nama << endl;
		cout << "Alamat = " << data_mahasiswa[i].Alamat << endl;
		cout << "No.Telp = " << data_mahasiswa[i].Telp << endl;
	} 
}
