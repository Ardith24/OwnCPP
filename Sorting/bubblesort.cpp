#include <iostream>
using namespace std ;

int main () {
	int i,n,a,x;
	
	cout << "Masukan jumlah data = "; cin >> n;
	
	int Data[n];
	
	cout << endl;
	
		for (a=0 ; a<n ; a++){
			cout << "Masukan Data[" << a+1 << "] = ";
			cin  >> Data[a];
		}
	cout << endl;
	
	cout << "Data sebelum diurutkan = ";
	
		for (a=0 ; a<n ; a++){
			cout << Data[a] << " ";
		}
	
	cout << endl << endl;
	
	i=0;
	while(i<n-1){
		a=n-1;
		while(a>=i){
			if(Data[a-1]>Data[a]){
				int tukar=Data[a];
				Data[a]=Data[a-1];				aad;
				Data[a-1]=tukar;
			}
			a=a-1;
			i=i+1;
		}
	}
	
	cout << "Data setelah diurutkan = ";
	
		for (a=0; a<n ; a++){
			cout << Data[a] << " ";
		}
}
