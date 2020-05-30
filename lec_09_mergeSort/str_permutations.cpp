#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int cnt=0;
void permut(char arr[],int beg){
	if(arr[beg] == '\0'){
		cout << ++cnt << " " << arr << endl;
		return;
	}

	for(int i=beg;arr[i]!='\0';++i){
		swap(arr[i],arr[beg]);
		permut(arr,beg+1);
		swap(arr[i],arr[beg]);

	}
}

int main(){
	char arr[100];
	cin>>arr;
	permut(arr,0);
}