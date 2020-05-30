#include <iostream>
using namespace std;
int lenStr(char arr[]){
	int i = 0;
	while(arr[i] != '\0') ++i; 
	return i;
}

bool isPalindrome(char arr[]){
	int endIndex = lenStr(arr) - 1;
	int beg = 0;
	while(beg < endIndex){
		if(arr[beg] != arr[endIndex]) {
			return false;
		}
		++beg;
		--endIndex;
	}
	return true;
}

int main(){
	char arr[100];
	cin.getline(arr, 100);
	cout << isPalindrome(arr);
	return 0;
}
	