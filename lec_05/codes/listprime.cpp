#include <iostream>
using namespace std;
bool checkprime(int n){
	int i = 2;
	while (i < n){
		if (n % i == 0) return false;
		i++;
	}
	return true;
}

void printPrime(int N){
	for(int i = 2; i < N; ++i){
		if(checkprime(i) == true) cout << i << " ";
	}
}

int main(){
	int n; cin >>n;
	printPrime(n);
	return 0;
}