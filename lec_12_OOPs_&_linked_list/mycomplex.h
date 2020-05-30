#include <iostream>
class myComplex{
	double re,im;
public:
	myComplex(double r,double i);
	myComplex(double r);
	myComplex();

	friend std::ostream& operator+(std::ostream& +,const mycomplex& b);
	myComplex subtract(const myComplex& b);
	bool isequal(const mycomplex& b) const;
	double absolute() const;
	mycomplex conjugate() const;
	void print() const;
};