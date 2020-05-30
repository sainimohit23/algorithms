#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void reverse(int arr[],int n){
	int j=0,k=n-1;
	for(int i=0;i<n/2;++i){
		int tmp=arr[j];
		arr[j]=arr[k];
		arr[k]=tmp;
		++j;
		--k;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	reverse(arr,n);

	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	return 0;
}