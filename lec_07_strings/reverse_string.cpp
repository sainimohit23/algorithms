#include <iostream>
using namespace std;
int arrlen(char arr[]){
	int i=0;
	while(arr[i]!='\0'){
		++i;
	}
	return i;
}

void revarr(char arr[], int lngth){
	char arr1[lngth];
	int t=lngth;
	for(int i=0;i<lngth;++i){
		arr1[i]=arr[t-1];
		--t;
	}

	cout<<arr1;
}

int main(){
	char arr[5000];
	cin.getline(arr,5000);

	int lngth;
	lngth=arrlen(arr);
	revarr(arr,lngth);
}