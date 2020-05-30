#include "bstNode.h"
#include "insert.h"
#include <iostream>

template <typename T>
BstNode<T> * createTree(){
	T x;
	BstNode<T> *root = 0;
	while (std::cin >> x && x != -1){
			root = insert(root, x);
	}
	return root;
}