#include "Node.h"
#include <iostream>
using namespace std;

template<typename T>
void inOrder(Node<T>* root){
	if(root == 0) return;

	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
	return;
}