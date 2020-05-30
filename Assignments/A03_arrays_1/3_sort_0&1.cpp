#include <iostream>
using namespace std;

void sorting(int arr[],int n,int arr1[]){
	int lastindex=n-1,startindex=0;
	for(int i=0;i<n;++i){
		if(arr[i]==0){
			arr1[startindex]=0;
			startindex++;
		}
		else{
			arr1[lastindex]=1;
			--lastindex;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n],arr1[n];

	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	sorting(arr,n,arr1);

	for(int i=0;i<n;++i){
		cout<<arr1[i];
	}
}