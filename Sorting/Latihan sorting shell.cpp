#include <iostream>
using namespace std ;

int main () {
	int i,jarak,sudah,n,a,x;
	
	cout << "Masukan jumlah data = "; cin >> n;
	
	int Data[n];
	
	cout << endl;
	
		for (a=0 ; a<n ; a++){
			cout << "Masukan Data[" << a << "] = ";
			cin  >> Data[a];
		}
	cout << endl;
	
	cout << "Data sebelum diurutkan = ";
	
		for (a=0 ; a<n ; a++){
			cout << Data[a] << " ";
		}
	
	cout << endl << endl;
		//1
		jarak=n;
		//2
		while(jarak>=1){
			//3
			jarak=jarak/2;
			
			//?
			sudah=false;
			//4
			while(sudah==false){
				//5
				sudah=true;
				//6
				a=0;
				//7
				while(a<n-jarak){
					//8
					if(Data[a]>Data[a+jarak]){
						//penukaran
						x=Data[a];
						Data[a]=Data[a+jarak];
						Data[a+jarak]=x;
						
						sudah=true;
						}
					//9
					a=a+1;
					}
				}
				//9
				//a=a+1;
			}
	
	cout << "Data setelah diurutkan = ";
	
		for (a=0; a<n ; a++){
			cout << Data[a] << " ";
		}
}
