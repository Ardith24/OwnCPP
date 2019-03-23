#include<iostream>
using namespace std;

void merge(int arr[], int awal, int tengah, int akhir)
{
    int i, j, k;
    int n1 = tengah - awal + 1;
    int n2 =  akhir - tengah;
 
    int L[30], R[30];
 
    for (i = 0; i < n1; i++){
    	L[i] = arr[awal + i];
	}
	
    for (j = 0; j < n2; j++){
    	R[j] = arr[tengah + 1 + j];
	}
 
    i = 0;
    j = 0;
    k = awal;
    while (i < n1 && j < n2){
    	if (L[i] <= R[j]){
        	arr[k] = L[i];
        	i++;
    	}else{
        	arr[k] = R[j];
        	j++;
    	}
    	k++;
    }
 
    while (i < n1){
    	arr[k] = L[i];
    	i++;
    	k++;
    }
 
    while (j < n2){
    	arr[k] = R[j];
    	j++;
    	k++;
    }
}
 
void mergeSort(int arr[], int awal, int akhir){
    if (awal < akhir){
    	int tengah = awal+(akhir-awal)/2;
 
	    mergeSort(arr, awal, tengah);
    	mergeSort(arr, tengah+1, akhir);
 
    	merge(arr, awal, tengah, akhir);
    }
}
 
int main(){
    int array[50],n;
    
    cout << "Masukan jumlah angka: ";
	cin  >> n;
    
	for(int i=0;i<n;i++){ 
		cout << "Angka ke-" << i+1 << " = ";
		cin  >> array[i];
    }
 
    mergeSort(array, 0, n-1);
 
    cout << "\n Merge Sorting: ";
 
    for(int j=0;j<n;j++){
    	cout << array[j] << " ";
	}
}
