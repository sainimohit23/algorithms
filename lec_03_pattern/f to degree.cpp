#include <iostream>
using namespace std;

int main(){


	double ini,fin,step,f,n,rstep;
 	double c;
	cin>>ini>>fin>>step;

	f=(fin-ini);
	n=1;
	rstep=0;

	cout << "farenheit  celsius\n";

	while(n<=10){

		c=(5/9)*(f-32);

		cout<<rstep<<"\t"<<c<<"\n";

		rstep=rstep+step;
		f=f+rstep;
		n=n+1;

	}

	return 0;

}
