#include <iostream>
using namespace std;
int * allocArr(){
	int *pArr = new int[10];
	pArr[0] = 11;
	delete [] &pArr[3];
	return pArr;
}
int main(){
	int * ptr = allocArr();
	cout << ptr[0] << " " << ptr[1];
	return 0;
}



