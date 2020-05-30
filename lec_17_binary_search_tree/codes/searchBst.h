#include "bstNode.h"

BstNode<int>* searchBst(BstNode<int> *root, int toSearch){
	if (root == 0){
		return 0;
	}

	if (root->data == toSearch) return root;
	if (root->data > toSearch) return searchBst(root->left, toSearch);
	return searchBst(root->right, toSearch);
}