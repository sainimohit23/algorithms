#include <iostream>
using namespace std;
template <typename T>
void mySwap(T& x, T& y){
	T tmp = x;
	x = y;
	y = tmp;
}

int main(){
	int a;	int b;
	a = 3; 	b = 4;
	mySwap(a, b);
	char x, y;
	mySwap(x, y);
	cout << a << b;
	return 0;
}