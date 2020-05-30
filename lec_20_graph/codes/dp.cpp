#include <iostream>
#include <cstring>
using namespace std;

int memo[100];

int fib(int n){
	if(memo[n] != -1) return memo[n];

	if (n == 0) return (memo[0] = 0);
	if (n == 1) {
		memo[1] = 1;
		return memo[1];
	}
	return memo[n] = fib(n - 1) + fib(n - 2);
}

int main(){
	memset(memo, -1, sizeof memo);
	int n ; cin >> n;
	int ans = fib(n);
	cout << ans;

}