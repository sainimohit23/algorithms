#include <iostream>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int arr1[m],arr2[n];

	for(int i=0;i<m;++i){
		cin>>arr1[i];
	}

	for(int i=0;i<n;++i){
		cin>>arr2[i];
	}

	int j=0,i=0;
	while(j!=n){
		if(arr1[i] == arr2[j]){
			cout<<arr1[i];
			++i;
			++j;
		}
		else ++j;
	}

	return 0;
}