#include <iostream>
#include <algorithm>
using namespace std;

int cnt = 0;

void permut(char str[], int be){
	if(str[be] == '\0'){
		cout << ++cnt << " " << str << endl;
		return;
	}
	
	for(int i = be; str[i] != '\0'; ++i){
		swap(str[i], str[be]);
		permut(str, be + 1);
		swap(str[i], str[be]);
	}

}

int main(){
	char inp[100];
	cin >> inp;
	permut(inp, 0);
	return 0;
}
	