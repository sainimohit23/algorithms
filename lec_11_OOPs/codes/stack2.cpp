#include "stack2.h"
#include <iostream>
using namespace std;
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
	return size == maxSize;
}

myStack::myStack(int n = 10){
	cout << "Ctor 1 called\n";
	arr = new int[n];
	maxSize = n;
	size = 0;
	top = -1;
}

myStack::myStack(int initList[], int n, int sze){
	cout << "Ctor 2 called\n";
	arr = new int[sze];
	top = -1;
	size = 0;
	maxSize = sze;
	int cur = 0;
	while(isFull() == false && cur < n){
		push(initList[cur]);
		cur++;
	}
}