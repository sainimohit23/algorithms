#include <iostream>
using namespace std;
#include "stack.h"

int main(){
	stack A(2);

	A.push(2);
	A.push(3);
	cout<<"len "<<A.getlen()<<endl;
	cout<<"empty "<<A.isempty()<<endl;
	cout<<"full "<<A.isfull()<<endl;
	cout<<A.pop()<<endl;

	cout<<A.pop()<<endl;
	cout<<"len "<<A.getlen()<<endl;

	return 0;
}
