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

int main(){
	int n; cin >> n;
	bool isprime = checkprime(n);
	if (isprime == true) cout << "Prime";
	else cout <<"not prime";
	return 0;
}