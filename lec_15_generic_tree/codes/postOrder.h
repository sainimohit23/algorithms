#include "Node.h"
#include <iostream>
template<typename T>
void postOrder(Node<T> *root){
	if (root == 0) return;

	for(int i = 0; i < root->n_child; ++i){
		postOrder(root->children[i]);
	}
	std::cout << root->data;
	// return;
}