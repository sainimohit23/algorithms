#include <iostream>
using namespace std;
#include <cstring>
#include <algorithm>
void input(char str[][100], int n){
	for(int i=0;i<n;++i){
		cin>>str[i];
	}
}

void insrt(char str[][100],int n){
	int arr[n];
	for(int i=0;i<n;++i){
		arr[i]=str[i][0];
	}

	for(int i=1;i<n;++i){
		int j=i;
		while(j>0 && arr[j]<arr[j-1]){
			int tmp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=tmp;

			char tmp2[100]=str[j];
			str[j]=str[j-1];
			str[j-1]=tmp2;
			--j;
		}
	}
}

int main(){
	int n;
	cin>>n;
	char str[100][100];
	input(str,n);

	insrt(str,n);

	for(int i=0;i<n;++i){
		cout<<str[i]<<endl;
	}
	
	return 0;
}