#include <iostream>
#include <cstring>
#include <cstring>
using namespace std;

void insrt(char arr[],int n){
	for(int i=1;i<n;++i){

			int j=i;

			while(j>0 && arr[j]<arr[j-1]){
				int t;
				t=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=t;
				--j;
			}

		}
}

void sbstring(char arr[],int index,int beg,char str[]){
	if(arr[beg]=='\0'){
		str[index]='\0';
		cout<<str<<endl;
		return;
	}

	str[index]=arr[beg];
	sbstring(arr,index+1,beg+1,str);
	sbstring(arr,index,beg+1,str);
}

int main(){
	int k;
	cin>>k;
	cin.get();
	for(int j=1;j<=k;++j){
		char arr[1000000],str[1000000];
		cin.getline(arr,1000000);
		int n=strlen(arr);
		insrt(arr,n);
		sbstring(arr,0,0,str);
	}
}