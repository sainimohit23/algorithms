#include "myComplex.h"
#include <iostream>
#include <cmath>
using namespace std;

myComplex::myComplex(double re,double im){
	this->re=re;
	this->im=im;
}

myComplex::myComplex(double r):re(r){
	im=0;
}

myComplex::myComplex(){
	re=0;
	im=0;
}


myComplex myComplex::operator+(const myComplex& b){
	myComplex C;
	C.re=re+b.re;
	C.im=im+b.im;

	return C;
}

myComplex myComplex::operator-(const myComplex& b){
	myComplex D;
	D.re=re-b.re;
	D.im=im-b.im;

	return D;
}

std::ostream& operator<<(std::ostream& printer,const myComplex& c){
	printer<<c.re;
	if(c.im>0) printer <<"+";
	printer <<c.im<<"i"<<endl;
}

bool myComplex::isequal(const myComplex& b )const{
	return re==b.re && im==b.im;
}

double myComplex::absolute()const{
	double c;

	c=sqrt(re*re+im*im);

	return c;

}

myComplex myComplex::conjugate()const{
	myComplex E;
		E.re=re;
		E.im=-im;

		return E;
}