#include <iostream>
using namespace std;

int main(){
	double n;
	cin>>n;
	int decimal=n,decibin=0,rem;

	while(n>=0){
		rem=n%2;
		n=n/2;
		decibin=decibin*10+rem;
	}




	return 0;
}