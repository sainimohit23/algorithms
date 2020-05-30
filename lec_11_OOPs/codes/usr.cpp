#include "myStack.h"
#include <iostream>
using namespace std;
int main(){
	int arrList[] = {1,2,4};
	// myStack A(arrList, 3);
	myStack A(arrList,3);
	myStack B(A);	//copy ctor
	B = A;	//assignment 
	
	// myStack B(10); 
	cout << A.pop()<<endl;
	cout << B.getSize()<<endl;
	cout << B.pop()<<endl;
	// A.push(5);
	// cout << A.pop();

	cout<<A.isFull()<<endl;
	
	cout<<A.isEmpty()<<endl;
}