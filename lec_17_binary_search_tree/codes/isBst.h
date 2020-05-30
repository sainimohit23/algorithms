#include "bstNode.h"

bool isBst(BstNode<int>* root, int MIN = -10000, int MAX = 10000){
	if (root == 0) return true;

	if (root->data >= MIN && root->data <= MAX){
		bool isLeft = isBst(root->left, MIN, root->data);
		bool isRight = false;
		if (isLeft == true) isRight = isBst(root->right, root->data, MAX);
		return isLeft && isRight;

		//return isBst(root, MIN, root->data) && isBst(root, root->data, MAX);
	}

	return false;

}


//buggy
// bool isBst1(Node<int>* root){
// 	if (root == 0) return true;

// 	bool isLeft = isBst(root->left);
// 	if(!isLeft) return false;

// 	bool isRight = isBst(root->right);
// 	if(!isRight) return false;

// 	if(root->left && root->left->data > root->data) return false;
// 	if (root->right && root->right->data <root->data) return false;
// 	return true;
// }