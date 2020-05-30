#include <iostream>
using namespace std;

int lenStr(char arr[]){
	int i = 0;
	while(arr[i] != '\0') ++i; 
	return i;
}

int main(){
	char arr[10];
	cin.getline(arr, 100);
	int len = lenStr(arr);
	cout << arr << " has " << len << " characters\n";
	return 0;
}
	