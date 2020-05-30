#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
void mirror(Node<T> * root){
	if(root == 0) return;

	mirror(root->left);
	mirror(root->right);

	Node<T>* tmp=root->left;
	root->left = root->right;
	root->right = tmp;	

	return;
}