#include "stack.h"
#include <iostream>
using namespace std;

int main(){
	char arr[100];
	cin.getline(arr,100);
	stack A;
	A.push(arr);
	cout<<A.pop(arr)<<endl;
	cout<<A.pop(arr)<<endl;
	cout<<A.cursize();

	return 0;
}