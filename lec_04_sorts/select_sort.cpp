#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	for(int i=0;i<n;++i){
		int curmin=i;
		for(int j=i+1;j<n;++j){
			if(arr[j]<arr[curmin]){
				curmin=j;
			}
		}

		int t;
		t=arr[i];
		arr[i]=arr[curmin];
		arr[curmin]=t;
	}

	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}

	return 0;
}