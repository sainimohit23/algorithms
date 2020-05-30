#include <iostream>
using namespace std;

int * allocInt(){
	int * pi = new int;
	*pi = 10;
	cout << pi << endl;
	cout << *pi << endl;
	return pi;
}

int main(){
	int * pi = allocInt();
	*pi = 14;
	cout << *pi << endl;
	delete pi;
	int * pi2 = new int;
	*pi2 = 4;
	cout << pi2 << endl;
	cout << pi << endl;
	*pi = 15;
	cout << *pi;
	return 0;
}
	