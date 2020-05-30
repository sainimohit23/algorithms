#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	char str[50000];
	cout<<"enter string"<<endl;
	cin.getline(str,50000);
	int x;
	cout<<"enter integer"<<endl;
	cin>>x;
	int arr[50000],n=strlen(str);

	for(int i=0;i<n;++i){
		arr[i]=str[i];
	}

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(arr[i]+arr[j]==x){
				cout<<str[i]<<"\t"<<str[j]<<endl;
			}
		}
	}

return 0;
}

