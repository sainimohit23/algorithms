#include <iostream>
using namespace std;

int fact(int n){
	int ans = 1;
	for(int i = 1; i <= n; ++i) ans *= i;
	return ans;
}

int main(){
	int n; cin >> n;
	int f = fact(n);
	cout << f << endl;
	return 0;
}