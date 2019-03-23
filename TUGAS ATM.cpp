#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;

int saldo;

    string nasabah;
	string password;
	string AkunNasabah [6] = {"Ardith","ardith","Rico","rico","Fathan","fathan"};
	string PasswordNasabah [3] = {"020499","1234","5678"};
	
void AkunLogin(){
	awal1:

	cout << "Masukan username = ";
	cin  >> nasabah;
		if (nasabah==AkunNasabah[0] || nasabah==AkunNasabah[1]){
			awal2:
			cout << "Masukan PIN = ";
			cin  >> password;
				if (password==PasswordNasabah[0]){
					cout << "******Login Sukses******" << endl;
				} else{
					cout << "PIN yang Anda masukan salah, silahkan coba lagi" << endl;
					goto awal2;
				}
		} else if (nasabah==AkunNasabah[2] || nasabah==AkunNasabah[3]){
			awal3:
			cout << "Masukan PIN = ";
			cin  >> password;
				if (password==PasswordNasabah[1]){
					cout << "******Login Sukses******" << endl;
				} else{
					cout << "PIN yang Anda masukan salah, silahkan coba lagi" << endl;
					goto awal3;
				}
		} else if (nasabah==AkunNasabah[4] || nasabah==AkunNasabah[5]){
			awal4:
			cout << "Masukan PIN = ";
			cin  >> password;
				if (password==PasswordNasabah[2]){
					cout << "******Login Sukses******" << endl;
				} else{
					cout << "PIN yang Anda masukan salah, silahkan coba lagi" << endl;
					goto awal4;
				}
		} else {
			cout << "Akun tidak ditemukan, harap masukan username dengan benar" << endl;
			goto awal1;
		}
	}


void AkunMenu() {
	login:
    char Input;
    float Jumlah_Deposit;
    float Jumlah_Transfer;
	awal2:
    cout << endl << "d -> Deposit" << endl;
    cout << "t -> Transfer" << endl;
    cout << "c -> Cek Saldo" << endl;
    cout << "l -> Logout" << endl;
    cout << "q -> Quit" << endl;
    cout << endl << "Pilihan Anda ";
    cin >> Input;


    if((Input == 'd') || (Input == 'D')) {
        
		cout << "************************" << endl;
        cout << endl <<  "Jumlah deposit: " << endl;
        	cin >> Jumlah_Deposit;
        cout << "************************" << endl;
        
		saldo=saldo+Jumlah_Deposit;
        
		goto awal2;
    }        

    else if((Input == 't') || (Input == 'T')) {

        cout << endl << "Masukan jumlah yang akan ditransfer: " << endl;
        cin >> Jumlah_Transfer;
        
		if(Jumlah_Transfer < saldo) {
        
			saldo=saldo-Jumlah_Transfer;
            cout << endl << "******Sukses Transfer*******" << endl;
        
		} else if(Jumlah_Transfer > saldo) {
        
		    cout << endl << "******Saldo tidak mencukupi*******" << endl;
        
		}
        goto awal2;
        
    }
    else if((Input == 'c') || (Input == 'C')) {
		
		cout << "************************" << endl;
        cout << endl << "Saldo Anda saat ini: " << saldo << endl;
        cout << "************************" << endl;
        
		goto awal2;
    }
	else if((Input == 'l') || (Input == 'L')) {
    	cout << "************************" << endl; 
		AkunLogin();
		AkunMenu();
        }
    else if((Input == 'q') || (Input == 'Q')) {
    	
		cout << "************************" << endl;
    	cout << endl << "Terima Kasih, Sampai Jumpa!";
        
		}
	else {
		
		cout << "Maaf input tidak valid";
		
		goto awal2;
	}       
}


int main(){
	AkunLogin();
	AkunMenu();
}
