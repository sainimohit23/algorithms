#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	cout<<"enter array elements"<<endl;
	int arr[n],m;

	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	cout<<"enter integer"<<endl;
	cin>>m;

	for(int i=0;i<n;++i){
		for(int j=i;j<n;++j){
			for(int k=j;k<n;++k){
				if(arr[i]+arr[j]+arr[k]==m){
					cout<<arr[i]<<"\t"<<arr[j]<<"\t"<<arr[k]<<endl;
				}
			}
		}
	}

	return 0;
}