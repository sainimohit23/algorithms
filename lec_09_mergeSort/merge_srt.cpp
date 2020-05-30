#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void myMERGE(int left[],int Lbe,int Len,
			int right[],int Rbe,int Ren,
			int arr[],int be)
{

	int X[100],Y[100];

	int TL=Len-Lbe+1,TR=Ren-Rbe+1;

	for(int i=0;i<TL;++i) X[i]=arr[i+Lbe];
	for(int i=0;i<TR;++i) Y[i]=arr[i+Rbe];

	int k = be;
	int inX = 0, inY = 0;
	while(inX<TL && inY<TR){
		if(X[inX] < Y[inY]){
			arr[k] = X[inX];
			++inX; ++k;
		}
		else {
			arr[k] = Y[inY];
			++inY; ++k;
		}
	}

	while(inX < TL)	arr[k++] = X[inX++];
	while(inY < TR)	arr[k++] = Y[inY++];

}

void mergeSRT(int arr[],int be,int en){
	if(be>=en) return;

	int mid=(be+en)/2;
	mergeSRT(arr,be,mid);
	mergeSRT(arr,mid+1,en);
	myMERGE(arr,be,mid,arr,mid+1,en,arr,be);
}

void arrOUTPUT(int arr[],int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
}



// inputarray
void arrINPUT(int arr[],int n){
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	arrINPUT(arr,n);
	mergeSRT(arr,0,n-1);
	arrOUTPUT(arr,n);
}