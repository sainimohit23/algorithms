#include "bstNode.h"

template<typename T>
BstNode<T> * insert(BstNode<T> *root , T data){
		if (root == 0){
			BstNode<T> *firstNode = new BstNode<T>(data);
			return firstNode;
		}

		if(data <= root->data){
			root->left = insert(root->left, data);
		}
		else {
			root->right = insert(root->right, data);
		}
		return root;
}