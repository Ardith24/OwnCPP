#include <iostream>
using namespace std ;

int main () {
	int i=0,n,k,a,x;
	
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
	
		while(i<n-1){
			k=i;
			a=i+1;
			while(a<n){
				if(Data[k]>Data[a]){
					k=a;
					a=a+1;
				}
			}
			x=Data[i];
			Data[i]=Data[a];
			Data[a]=Data[x];
			i=i+1;
		}
	
	cout << "Data setelah diurutkan = ";
	
		for (a=0; a<n ; a++){
			cout << Data[a] << " ";
		}
}
