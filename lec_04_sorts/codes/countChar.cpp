#include <iostream>
using namespace std;
int main(){
	char c;
	// cin >> c;
	int cnt = 0;
	while(cin >> c && c != '$'){
		// if(c=='$') break;
		++cnt;
		// cin >> c;
	}
	cout << cnt;

}