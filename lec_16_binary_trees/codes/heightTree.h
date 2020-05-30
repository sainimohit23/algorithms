#ifndef _HEIGHTTREE_H
#define _HEIGHTTREE_H 
#include "node.h"
#include <algorithm>

int max(int x, int y){
	if (x > y) return x;
	else return y;
}

template <typename T>
int heightTree(Node<T> * root){
	if (root == 0) return 0;

	int leftHt = heightTree(root->left);
	int rightHt = heightTree(root->right);
	return std::max(leftHt, rightHt) + 1;
}

#endif