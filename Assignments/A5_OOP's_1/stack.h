#include <iostream>
using namespace std;

class stack{
private:
	int size;
	int top;
	int strlength;
public:
	stack();
	void push(char arr[]);
	char pop(char arr[]);
	int cursize();
};