#include "stack2.h"
#include <iostream>
using namespace std;
int main(){
	int inp[] = {1,2,4};

	myStack A; A.push(1); A.push(2); A.push(4);
	myStack B(A);
	
	B.pop();
	B.push(11);

	cout << A.pop()<<endl;
	cout << A.pop()<<endl;
	cout << B.pop()<<endl;
	
}