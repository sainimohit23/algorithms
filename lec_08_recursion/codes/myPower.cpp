#include "helper.h"

int myPower(int x, int n){
	if (n <= 0) return 1;

	//x^n = x * x ^ (n - 1)
	int smallN = myPower(x, n - 1);
	int ans = x * smallN;
	return ans;
}


int main(){
	int n,x;
	cin >> x >> n;
	int ans = myPower(x, n);
	cout << ans;
	return 0;
}