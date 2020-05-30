#include <iostream>
using namespace std;
void ssum(int n1,int n2,int arr[]);

int main(){

	int n1,n2,pass;

	cin>>n1>>n2;

	int arr[n2];

	for(int i=0;i<n2;++i){
		cin>>arr[n2];
	}

	ssum(n1,n2,arr);


}

void ssum(int n1,int n2,int arr[]){
	for(int i=0;i<=n2;++i){

		for(int j=i+1;j<=n2;++j){

			if((arr[i]+arr[j])==n1){

				cout<<arr[i]<<"\t"<<arr[j];
				break;
			}
		}
	}

}