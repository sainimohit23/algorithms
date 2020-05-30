#include <iostream>
using namespace std;

void cpy(char copyTo[], char copyFrom[]){
	int i = 0;
	while(copyFrom[i] != '\0'){
		copyTo[i] = copyFrom[i];
		++i;
	}
	copyTo[i] = '\0';
}

int lenStr(char arr[]){
	int i = 0;
	while(arr[i] != '\0') ++i; 
	return i;
}

void printLargest(int n){
	char arr[100];
	char ans[100];
	int maxLen = 0;
	for(int i = 0; i < n; ++i){
		cin.getline(arr, 100);
		int curLen = lenStr(arr);
		if(curLen > maxLen){
			maxLen = curLen;
			cpy(ans, arr);
		}
	}
	cout << ans << " " << maxLen << endl;
}

int main(){
	int n;	cin >> n;
	cin.get();		//to consume '\n' in the buffer
	printLargest(n);
	return 0;
}
