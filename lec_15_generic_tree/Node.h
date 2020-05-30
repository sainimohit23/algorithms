#ifndef NODE_H //to check if it is already included or not
#define NODE_H

template <typename T>
class Node{
public:
	T data;
	int n_child;
	Node **children;
	Node(T d){
		data = d;
		n_child = 0;
		children = 0;
	}
};

#endif