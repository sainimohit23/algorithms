#include <iostream>
using namespace std;
int arrlen(char arr[]){
	int i=0;
	while(arr[i]!='\0'){
		++i;
	}
	return i;
}

void rotatestr(char arr[],int lngth,int d){
	d=d%lngth;
	char arr1[lngth];

	for(int i=0,j=lngth-d;i<d,j<lngth;++i,++j){
		arr1[i]=arr[j];
	}
	for(int i=d,j=0;i<lngth,j<lngth-d;++i,++j){
		arr1[i]=arr[j];
	}

	cout<<arr1;
}

int main(){
	char arr[5000];
	cout<<"enter string"<<endl;
	cin.getline(arr,5000);
	int d;
	cout<<"enter number of rotations"<<endl;
	cin>>d;

	int lngth;
	lngth=arrlen(arr);
	rotatestr(arr,lngth,d);
	
}