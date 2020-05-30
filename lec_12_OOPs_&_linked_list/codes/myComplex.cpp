#include <iostream>
#include <cmath>
#include "myComplex.h"
myComplex::myComplex(double re, double im){
	this->re = re;
	this->im = im;
}

myComplex::myComplex(double r): re(r){
	im = 0.0;
}

myComplex::myComplex(){
	re = 0.0;
	im = 0.0;
}

myComplex myComplex::operator+(const myComplex& b){
	myComplex C;
	C.re = re + b.re;
	C.im = im + b.im;
	return C;
}

myComplex myComplex::operator-(const myComplex& b){
	myComplex D;
	D.re=re-b.re;
	D.im=im-b.im;
	return D;
}

bool myComplex::isEqual(const myComplex& b) const{
	return re == b.re && im == b.im;
}

void myComplex::absolute() const{
	std::cout<<std::sqrt(re * re + im * im)<<"\n";
}

myComplex myComplex::conjugate() const{
	return myComplex(re, -im);
}

std::ostream& operator<<(std::ostream& printer, const myComplex& c){
	printer << c.re;
	if (c.im > 0) printer << "+";
	printer << c.im << "i" << "\n";
	return printer;
}