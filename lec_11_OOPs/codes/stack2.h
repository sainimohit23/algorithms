#include <iostream>
using namespace std;
class myStack{
private:
	int * arr;
	int top;
	const int size;
public :
	myStack():size(10), top(-1) {	//initalisation list
		cout << "0 Parameter ctor\n";
		arr = new int[10]; 
		// size = 10;
		// top = -1;
	}
	int push(int val){
		arr[++top] = val;
	}
	int pop(){
		return arr[top--];
	}
	myStack(const myStack& S) : size(S.size){
		cout << "cctor is called\n";
		// S.size = 0;
		// size = S.size;
		top = -1;
		arr = new int[size];
		for(int i = 0; i <= S.top; ++i){
			push(S.arr[i]);
		}
	}
	int getSize() const {
		// size = 4;
		return size;
	}
	~myStack(){
		delete [] arr;
		cout << "Inside Dtor\n";
	}
};

