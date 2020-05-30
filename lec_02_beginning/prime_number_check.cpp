#include <iostream>
using namespace std;

int main(){
	int a,b;
	bool isprime = true;
	b=2;
	cin>>a;
	while(b<a){
			if(a%b==0){
			cout << a << " is not prime\n";
			isprime = false;
			break;
			}
			b=b+1;
	}
	if(isprime == true){
		cout << a << " is prime";
	}
	return 0;
}