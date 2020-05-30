#include <iostream>
using namespace std;
int staticDemo(){
	static int var = 1;
	// var = 1;
	cout << var;
	var += 1;
}
int main(){
	staticDemo();
	staticDemo();
	staticDemo();
	return 0;
}
	