#include "mystack.h"
#include <iostream>
using namespace std;

int main(){
	mystack A;

	A.push(2);
	A.push(3);
	cout<<A.pop()<<endl;
	cout<<A.pop()<<endl;
}