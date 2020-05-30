#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
bool isBst(Node<T>* root,T MIN=-10000,T MAX=10000){
	if(root == 0) return true;

	if(root->data >=MIN && root->data <=MAX){
		bool left = isBst(root->left,MIN,root->data);
		bool right = isBst(root->right,root->data,MAX);

		return left && right;
	}

	return false;
}