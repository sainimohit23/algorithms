#include <iostream>
#include "stack.h"
using namespace std;
int main(){
	Stack s(10);
	s.push(2);
	s.push(3);

	Stack  s2(s);

	cout << s.pop()<<endl;
	cout << s2.pop()<<endl;
	cout << boolalpha << s.isEmpty()<<endl;
}