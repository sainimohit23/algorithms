#include <iostream>
using namespace std;
bool chkprime(int n);

int main(){

	int num;

	cin>>num;

	bool isprime= chkprime(num);

	if(isprime==false){
		cout<<"not prime\n";
	}

	else{

		cout<<"prime\n";


	}

	return 0;
}


bool chkprime(int n){

	int i=2;

	while(i<n){
		if(n%i==0){
			return false;
		}

		i++;
	}

	return true;

}