#include "mystack.h"
#include <iostream>
using namespace std;

int mystack::pop(){
	if(isempty()==true) return -1;
	--size;
	return arr[top--];
}

void mystack::push(int val){
	if(isfull()==true) return;
	arr[++top]=val;
	++size;
}

int mystack::getsize(){
	return size;
}

bool mystack::isempty(){
	return top==-1;
}

bool mystack::isfull(){
	return size==100;
}

mystack::mystack(){
	top=-1;
	size=0;
}