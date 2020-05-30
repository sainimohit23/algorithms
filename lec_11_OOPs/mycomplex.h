#include <iostream>
class myComplex{
	double re,im;
public:
	myComplex(double r,double i);
	myComplex(double r);
	myComplex();

	myComplex operator+(const myComplex& b);
	myComplex operator-(const myComplex& b);
	bool isequal(const myComplex& b) const;
	double absolute() const;
	myComplex conjugate() const;
	friend std::ostream& operator<<(std::ostream& p, const myComplex& c);
};