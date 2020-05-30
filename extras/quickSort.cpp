#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int &xp, int &yp) 
{ 
    int temp = xp; 
    xp = yp; 
    yp = temp; 
} 

int partition(int arr[], int be, int en){
	int pivot = arr[be];
	int i = be+1;

	for(int j=be+1; j<=en;++j){
		if(arr[j] < pivot){
			swap(arr[i], arr[j]);
			++i;
		}
	}

	swap(arr[i-1], arr[be]);

	return i-1;
}


void quickSRT(int arr[], int be, int en){
	if(be<en){
		int p = partition(arr, be, en);

		quickSRT(arr, be, p-1);
		quickSRT(arr, p+1, en);
	}
}



void arrOUTPUT(int arr[],int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
}


void arrINPUT(int arr[],int n){
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	arrINPUT(arr,n);
	quickSRT(arr, 0, n-1);
	arrOUTPUT(arr,n);
}