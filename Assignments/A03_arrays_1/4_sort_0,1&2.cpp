#include <iostream>
using namespace std;

void sorting(int arr[],int n,int arr1[]){
	int lastindex=n-1,startindex=0;
	for(int i=0;i<n;++i){
		if(arr[i]==0){
			arr1[startindex]=0;
			startindex++;
		}
		else if(arr[i]==2){
			arr1[lastindex]=2;
			--lastindex;
		}
	}

	for(int i=startindex;i<=lastindex;++i){
		arr1[i]=1;
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