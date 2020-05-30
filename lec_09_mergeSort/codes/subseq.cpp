
#include <iostream>
using namespace std;
int cnt = 0;

void subseq(char str[], int be, char sol[], int index){
	if(str[be] == '\0'){
		sol[index] = '\0';
		cout << ++cnt << " " << sol << "\n";
		return;
	}


	
	sol[index] = str[be];
	subseq(str, be + 1, sol, index + 1);
	subseq(str, be + 1, sol, index);
}

int main(){
	char inp[100];
	char sol[100];
	cin >> inp;
	
	subseq(inp, 0, sol, 0);
	
	return 0;
}
	