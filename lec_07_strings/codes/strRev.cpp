#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void myReverse(char arr[]){
	int en = strlen(arr) - 1;
	int be = 0;
	while(be < en){
		swap(arr[be], arr[en]);
		++be; --en;
	}
}

int main(){
	char arr[100];
	cin.getline(arr, 100);
	myReverse(arr);
	cout << arr;
	return 0;
}
	