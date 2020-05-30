#include <iostream>
using namespace std;

int arrsum(int arr[],int n,int sum){
	if(n>0){
	int t=arr[n-1];

	sum=sum+t+arrsum(arr,n-1,sum);
	}
}

void inp(int arr[],int n){
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	inp(arr,n);
	int s=0;
	int sum=arrsum(arr,n,s);
	cout<<sum;
}