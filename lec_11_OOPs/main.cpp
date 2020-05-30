#include "myComplex.h"
#include <iostream>
using namespace std;

int main(){
	myComplex A(2,3);
	myComplex B(1,4);

	myComplex C,D;

	C=A+B;
	D=A-B;
	cout<<"value of A is "<<A;
	cout<<B;
	cout<<C;
	cout<<D;

	cout<<A.isequal(B)<<endl;
	cout<<A.absolute()<<endl;
	// cout<<B.absolute()<<endl;
	// cout<<C.absolute()<<endl;
	// cout<<D.absolute()<<endl;

	cout<<A.conjugate(); 
	return 0;
}