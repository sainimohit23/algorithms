#include <iostream>
using namespace std;
int fact(int n){
	int ans = 1;
	for(int i = 1; i <= n; ++i) ans *= i;
	return ans;
}

int ncr(int n, int r){

	return fact(n) / fact(r) / fact(n - r);

}

int main(){
	int n, r;
	cin >> n >> r;
	cout << ncr(n,r);
	return 0;
}