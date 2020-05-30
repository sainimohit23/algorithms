#include <iostream>
using namespace std;

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
	int n;
	cin>>n;
	int arr[n],arr1[n],num;
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	for(int i=0;i<n;++i){
		arr1[i]=arr[i];
	}

	insrt(arr1,n);

	for(int i=0;i<n;++i){
		if(arr1[0]==arr[i]){
			num=i;
		}
	}

	cout<<num;

	return 0;
}