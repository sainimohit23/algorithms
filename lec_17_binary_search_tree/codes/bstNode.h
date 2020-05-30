#ifndef _BST_NODE_H_
#define _BST_NODE_H_

template <typename T>
class BstNode{
public:
	T data;
	BstNode<T> *left;
	BstNode<T> *right;
	BstNode(T d){
		data = d;
		left = 0;
		right = 0;
	}
};

#endif