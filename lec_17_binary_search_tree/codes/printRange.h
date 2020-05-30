#include <iostream>
#include "bstnode.h"
void printRange(BstNode<int> *root, int K1, int K2){
	if (root == 0){
		return;
	}

	if(root->data >= K1 && root->data <= K2){
		std::cout << root->data << " ";
	}

	printRange(root->left, K1, K2);
	printRange(root->right, K1, K2);
}


//using property of BST
void printRange2(BstNode<int> *root, int K1, int K2){
	if (root == 0) return;

	if(root->data >= K1 && root->data <= K2){
			std::cout << root->data << " ";
	}

	if (root->data <= K1) printRange2(root->right, K1, K2);
	if (root->data >= K2) printRange2(root->left, K1, K2);
}