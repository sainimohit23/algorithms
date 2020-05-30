#include <iostream>
using namespace std;
int cntzero(int arr[],int n){
	int num=0;
	for(int i=0;i<n;++i){
		if(arr[i]==0){
			num=num+1;
		}
	}
	return num;
}

void arrsrt(int arr[],int n,int zer){
	int arr1[n],j=0;
	for(int i=0;i<n;++i){
		if(arr[i]!=0){
			arr1[j]=arr[i];
			++j;
		}
	}

	for(int i=n-zer;i<n;++i){
		arr1[i]=0;
	}

	for(int i=0;i<n;++i){
		cout<<arr1[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	int zer=cntzero(arr,n);
	arrsrt(arr,n,zer);
	return 0;
}