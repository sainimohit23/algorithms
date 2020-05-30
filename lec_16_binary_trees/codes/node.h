#ifndef _BINARY_NODE_
#define _BINARY_NODE_

template <typename T>
struct Node{
	T data;
	Node<T> *left;
	Node<T> *right;

	//ctor
	Node(T d){
		data = d;
		left = 0;
		right = 0;
	}
};

#endif