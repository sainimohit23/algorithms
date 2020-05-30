#include "myStack.h"
#include <iostream>
using namespace std;
myStack::myStack(){
	cout << "Ctor 1 called\n";
	size = 0;
	top = -1;
}

myStack::myStack(int initList[], int n){
	cout << "Ctor 2 called\n";
	top = -1;
	size = 0;
	int cur = 0;
	while(isFull() == false && cur < n){
		push(initList[cur]);
		cur++;
	}
}
	
void myStack::push(int val){
	if(isFull() == true) return;
	arr[++top] = val;
	++size;
}


int myStack::pop(){
	if(isEmpty() == true) return -1;
	--size;
	return arr[top--];
}

int myStack::getSize(){
	return size;
}

bool myStack::isEmpty(){
	return top == -1;
}

bool myStack::isFull(){
	return size == 100;	
}
