#include <iostream>
#define n 20
using namespace std;

int Ar[n];
void quickSort(int array[], int left, int right);

int main(){
int jumlahBil;

	cout << "Masukkan jumlah bilangan dalam array [Maksimal 20]" << endl;
	cin  >> jumlahBil;

int Ar[jumlahBil];
		for(int i=0; i<jumlahBil; i++){
			cout << "Bilangan ke-" << i+1 << endl;
			cin  >> Ar[i];
			}

cout<<"Data yang belum diurutkan"<<endl;

		for(int i=0; i<jumlahBil; i++){
			cout << Ar[i] << "\n";
			}
			
quickSort(Ar,0,jumlahBil-1 );

cout<<"Data yang telah diurutkan"<<endl;

		for(int i=0; i<jumlahBil; i++){
			cout << Ar[i] << "\n";
			}
}


void quickSort(int array[], int left, int right){
	int i = left;
	int j = right;
	int tmp;

	int pivot = array[(left + right) / 2];
		
		//selama sebelah kiri lebih kecil sama dengan dari sebelah kanan lakukan
		while (i <= j){
		
			//selama index array i(kiri) lebih kecil dari pivot(angka acak)
			while (array[i] < pivot)
		
			//berjalan untuk menuju angka selanjutnya
			i++;
		
				//selama index array j(kanan) lebih kecil dari pivot(angka acak)
				while (array[j] > pivot)
				//berjalan untuk menuju angka sebelumnya
				j--;
			
				if (i <= j) {
					//tukar
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;
					i++;
					j--;
				}
			};
			
			if (left < j)
				quickSort(array, left, j);

			if (i < right)
				quickSort(array, i, right);
		}
