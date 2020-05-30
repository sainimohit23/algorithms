#ifndef bstNode
#define bstNode

template <typename T>
class Node{
public:
	T data;
	Node<T> * left;
	Node<T> * right;
	Node(T d){
		data = d;
		left = 0;
		right = 0;
	}
};

#endif