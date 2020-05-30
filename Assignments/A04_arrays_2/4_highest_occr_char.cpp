#include <iostream>
using namespace std;
#include <cstring>
#include <algorithm>

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
	char str[5000],maxchar;
	cin.getline(str,5000);
	int arr[5000],n=strlen(str);

	for(int i=0;i<n;++i){
		arr[i]=str[i];
	}

	insrt(arr,n);
	int curmax=0,i=0;

	while(i<n){
		int count=1;
		++i;

		while(arr[i-1]==arr[i]){
			count=count+1;
			++i;
		}

		if(count>curmax){
			curmax=count;
			maxchar=arr[i-1];
		}

	}

	cout<<curmax<<"\t"<<maxchar;
	return 0;

}