#include "mycomplex.h"
#include <iostream>
using namespace std;

mycomplex::mycomplex(double re,double im){
	this->re=re;
	this->im=im;
}

mycomplex::mycomplex(double r):re(r){
	im=0;
}

mycomplex::mycomplex(){
	re=0;
	im=0;
}

std::ostream& operator+(std::ostream& p,const mycomplex& b){
	mycomplex C;
	C.re=re+b.re;
	C.im=im+b.im;

	return C;
}

std::ostream& operator<<(std::ostream& printer,const mycomplex& c){
	printer<<c.re;
	if(c.im>0) printer <<"+";
	printer <<c.im<<"i"
}