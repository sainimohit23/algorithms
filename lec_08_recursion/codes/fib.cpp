#include <iostream>
using namespace std;

int fib(int n){
	if (n == 1) return 0;
	if (n == 2) return 1;

	int pre = fib(n - 1);
	int superPre = fib(n - 2);
	int cur = pre + superPre;
	return cur;
}



int main(){
	int n;	cin >> n;
	int nFib = fib(n);
	cout << nFib;
	return 0;
}
	