#include "node.h"

template <typename T>
int countNode(Node<T>* root){
	if(root == 0) return 0;

	int leftCount = countNode(root->left);
	int rightCount = countNode(root->right);
	return leftCount + rightCount + 1;
}