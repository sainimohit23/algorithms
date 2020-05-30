#include <iostream>
using namespace std;

void printInc(int n){
	if (n == 0) return;
	printInc(n - 1);		//1...n-1
	cout << n;
}

int main(){
	int n;
	cin >> n;
	printInc(n);
	// prints 1...n 
	return 0;
}
