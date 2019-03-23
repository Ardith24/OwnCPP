#include <iostream>
using namespace std;


//Gaji pokok = Rp.1000/jam
//Lembur (jam kerja > 40 jam) = Rp.2000/jam
//Kurang maksimal (jam kerja < 40 jam) denda = Rp.500/jam

int jam, jk, lembur, denda, jk_akhir;

int main (){
	cout << "Masukan jumlah jam kerja Anda selama seminggu = ";
	cin  >> jk;
	
	//biasa
	if(jk==40){
		jam=jk*1000;
		cout << "Gaji Anda per minggu = " << jam;
	}
	//lembur
	else if(jk>40){
		jk_akhir=jk;
		lembur=jk-40;
		jk=jk*1000;
		jam=jk_akhir+(lembur*2000);
		cout << "Gaji Anda per minggu = " << jam;
	}
	//kurang
	else if(jk<40){
		denda=40-jk;
		jam=(jk*1000)+(denda*500);
		cout << "Gaji Anda per minggu = " << jam;
	}
}
