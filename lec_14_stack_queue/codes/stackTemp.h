#include <iostream>
template <typename T>
class Stack{
	T arr[10];
	int top;
public:
	void push(T d);
};

template <typename T>
void Stack<T>::push(T d){
	arr[0] = d;
	std::cout << arr[0]<<std::endl;
}