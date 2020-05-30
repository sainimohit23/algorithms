#include <iostream>
using namespace std;
int sumarr(int *arr,int sze){
	int sum=0;

	for(int i=0;i<sze;++i){
		sum+=*(arr+i);
		//sum+=*a;
		//a++;
	}

	cout<<sum;
}


int main(){
	int n,sum;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	sumarr(arr,n);
}