#include <iostream>
using namespace std;

template <typename T>
class test{
	T data;
	public :
	test(T d);
};

template <typename T>
test<T>::test(T d){}

int main(){
	test<int> T(1);	
	return 0;
}
	