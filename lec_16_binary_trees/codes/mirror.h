#include "node.h"

Node<int> * mirror(Node<int> * root){
	if (root == 0) return 0;

	//swapping 2 links
	Node<int> * tmp = root->left;
	root->left = root->right;
	root->right = tmp;

	mirror(root->left);
	mirror(root->right);
	return root;
}