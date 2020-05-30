#include <iostream>
#include "bstNode.h"

//inorder printing
template <typename T>
void print(BstNode<T> *root){
		if (root == 0) return;

		print(root->left);
		std::cout << root->data << " ";
		print(root->right);
}		