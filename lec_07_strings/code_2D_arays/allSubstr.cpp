#include <iostream>
#include <cstring>
using namespace std;

void printStr(char str[], int be, int en){
	while(be <= en) cout << str[be++];
}

void allSub(char inp[]){
	int endInd = strlen(inp) - 1;
	for(int be = 0; be <= endInd; ++be){
		for(int en = be; en <= endInd; ++en){
			printStr(inp, be, en);
			cout << endl;
		}
	}
}

int main(){
	char inp[100];
	cin >> inp;
	allSub(inp);
	return 0;
}
	