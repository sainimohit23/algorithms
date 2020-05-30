#include <iostream>
#include <cstring>
using namespace std;

void strRot(char str[], int k){
	int len = strlen(str);
	k = k % len;
	int beIndex = len - k;
	char tmp[100];
	for(int i = 0; i < k; ++i) tmp[i] = str[beIndex++];

	for(int i = 0; i < len - k; ++i){
		int curInd = len - i - 1;	//index to be inserted here
		str[curInd] = str[curInd - k];
	}
	for(int i = 0; i < k; ++i) str[i] = tmp[i];
}

int main(){
	char inp[100];
	int k;
	cin >> inp >> k;
	strRot(inp, k);
	cout << inp;
	return 0;
}
	