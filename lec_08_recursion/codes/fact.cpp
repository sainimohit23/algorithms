#include <iostream>
using namespace std;

int fact(int n){
	if (n == 0) return 1;

	int factorial = n * fact(n - 1);
	//n! = n * (n - 1)!
	return factorial;
}


int main(){
	int n;	cin >> n;
	int f = fact(n);
	cout << f;
	return 0;
}
	