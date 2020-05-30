#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
void output(Node<T>* root){
	if(root == 0) return;

	output(root->left);
	cout<<root->data<<" ";
	output(root->right);

}