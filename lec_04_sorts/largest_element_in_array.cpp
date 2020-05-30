#include <iostream>
using namespace std;

int main(){

	int arr[20],n;

	cin>>n;

	for(int i=0;i<n;++i){

		cin>>arr[i];
	}

	for(int i=0;i<n-1;++i){

		for(int j=0;j<=n-1-i;j++){

			if(arr[j]>arr[j+1]){

				int t;

				t=arr[j];

				arr[j]=arr[j+1];

				arr[j+1]=t;
			}
		}
	}
} 

visual algorithm