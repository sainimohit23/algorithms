#include <iostream>
using namespace std;
#include <cstring>
#include <algorithm>

void insrt(int arr[],int n){
	for(int i=1;i<n;++i){
		int j=i;
		while(j>0 && arr[j]<arr[j-1]){
			int tmp;
			tmp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=tmp;
			--j;
		}
	}

}

int main(){
	int m,n;
	cin>>m>>n;
	int arr[m],arr1[n];
	for(int i=0;i<m;++i){
		cin>>arr[i];
	}
	for(int i=0;i<n;++i){
		cin>>arr1[i];
	}

	insrt(arr,m);
	insrt(arr1,n);
	// //use while 
	int curindex,i=0,arrfinal[m],k=0;

	// for(int i=0;i<m;++i){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<n;++i){
	// 	cout<<arr1[i]<<" ";
	// }
	// cout<<endl;

	while(i<m){
		int j=0;
		while(j<n){
		if(arr[i]==arr1[j]){
			arrfinal[k]=arr[i];
			++k;
			}
			++j;
		}
		++i;
	}
	int l=sizeof(arrfinal)/sizeof(int);
	for(int i=0;i<k;++i){
		cout<<arrfinal[i]<<" ";
	}
	return 0;
}