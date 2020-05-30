#include "stack.h"

stack::stack(int sze): maxsize(sze){
	arr= new int[maxsize];
	top=-1;
	cursize=0;
}

void stack::push(int d){
	if(cursize==maxsize) return;
	arr[++top]=d;
	++cursize;
}

int stack::pop(){
	if(cursize==0) return -1;
	int tmp=arr[top];
	--top;
	--cursize;
	return tmp;
}

bool stack::isempty() const {
	return cursize==0;
}

bool stack::isfull() const {
	return cursize==maxsize;
}

stack::~stack(){
	delete [] arr;
}

int stack::getlen(){
	return cursize;
}