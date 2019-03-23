#include <stdio.h>
//Pendeklarasian tipe data baru struct Mahasiswa
typedef struct Mahasiswa{
         char NIM[9];
         char nama[30];
         float ipk;
        };
int main(){
	//Buat variabel mhs bertipe data Mahasiswa
     	Mahasiswa mhs;
        cout << "NIM    = ";
        cin  >> "%s",mhs.NIM;
     	cout << "Nama   = ";
     	cin  >> "%s",mhs.nama;
     	printf("IPK = ");scanf("%f",&mhs.ipk);

     	cout << "Data Anda : \n";
     	cout << "NIM : %s\n",mhs.NIM;
     	cout << "Nama : %s\n",mhs.nama;
     	cout << "IPK : %f\n",mhs.ipk;
     	return 0;
}
