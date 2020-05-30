#include <iostream>
#include <cstring>
using namespace std;
int cnt = 0;
void printStr(char str[], int be, int en){
	cout << ++cnt << " ";
	for(; be <= en; ++be) cout << str[be];
	cout << endl;
}

void allSub(char str[]){
	int len = strlen(str);
	for (int be = 0; be < len; ++be){
		for(int en = be; en < len; ++en){
			printStr(str, be, en);
		}
	}
}

int main(){
	char arr[100];
	cin.getline(arr, 100);
	allSub(arr);
	return 0;
}
	