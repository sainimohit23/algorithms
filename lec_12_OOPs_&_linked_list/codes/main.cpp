#include <iostream>
#include "myComplex.h"
using namespace std;
int main(){
	myComplex A(2,3.3);
	myComplex B(5.1);
	myComplex C,D;
	C = A + B;
	D = A-B;
	// cout << A << B;
	D.absolute();
	cout << 2 << 3 << 4;
	std::cout<<D.conjugate();
}