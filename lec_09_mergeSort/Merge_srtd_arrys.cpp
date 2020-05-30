#include <iostream>
#include <algorithm>
using namespace std;
void insrt(int arr[],int n){
	for(int i=1;i<n;++i){

			int j=i;

			while(j>0 && arr[j]<arr[j-1]){
				int t;
				t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
				--j;
			}

		}
}


void arrOUTPUT(int arr[],int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
}

void arrMERGE(int arr[],int arr1[],int arr2[],int m, int n,int k){
	int p=0;

	for(int i=0;i<m;++i){
		arr2[i]=arr[i];
	}
	for(int i=m;i<k;++i){
		arr2[i]=arr1[p];
		++p;
	}
	insrt(arr2,m+n);
}

void arrINPUT(int arr[],int n){
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
}



int main(){
	int m,n;
	cin>>m>>n;
	int arr[m],arr1[n],arr2[m+n];
	arrINPUT(arr,m);
	arrINPUT(arr1,n);

	insrt(arr,m);
	insrt(arr1,n);

	arrMERGE(arr,arr1,arr2,m,n,m+n);
	arrOUTPUT(arr2,m+n);

	return 0;
}