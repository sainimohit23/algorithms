#include <iostream>
using namespace std;

int main(){
	int a,b;

	b=2;

	cin>>a;

	while(b<a){

		if(a%b==0){

			cout << "not prime";
		}

		a=a+1;

	}

	if(a=b){

		cout << "prime";
	}



	return 0;
}