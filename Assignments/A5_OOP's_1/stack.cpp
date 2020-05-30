#include "stack.h"
#include <iostream>
#include <cstring>
using namespace std;

stack::stack(){
	top=-1;
}

void stack::push(char arr[]){
	top=strlen(arr)-1;
	size=strlen(arr);
}

char stack::pop(char arr[]){
	if(top==-1) return '0';
	--size;
	return arr[top--];
}

int stack::cursize(){
	return size;
}