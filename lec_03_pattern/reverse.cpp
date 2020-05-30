#include <iostream>
using namespace std;

int main(){

	long int num,quo,rem;

	cin>>quo;

	num=0;

	while(quo>0){

		rem=quo%10;

		num=num*10+rem;

		quo=quo/10;

	}

	cout<<num;

	

	return 0;
}