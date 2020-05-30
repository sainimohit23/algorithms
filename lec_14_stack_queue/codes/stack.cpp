#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int sze) : maxSize(sze){
	arr = new int[maxSize];
	// maxSize = sze;	//assignment WRONG!!!
	top = -1;
	curSize = 0;
}

int Stack::push(int d){
	//check for emptiness
	if (curSize == maxSize) return -1; //return status
	arr[++top] = d;
	++curSize;
	return 0;	//success
}

int Stack::pop(){
	if (curSize == 0) return -1;
	--curSize;
	return arr[top--];
}

int Stack::getSize() const{
	return curSize;
}

bool Stack::isEmpty() const{
	// if(curSize == 0) return true;
 	// 	return false;
	return curSize == 0;
}

bool Stack::isFull() const{
	return curSize == maxSize;
}

Stack::~Stack(){
	cout<<"D called"<<endl;
	delete [] arr;
}

Stack::Stack(const Stack& S) : maxSize(S.maxSize){
	arr = new int[maxSize];
	curSize = 0;
	top = -1;
	for(int i = 0; i <= S.top; ++i){
		push(S.arr[i]);
	}
}