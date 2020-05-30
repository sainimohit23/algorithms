#include "Node.h"
#include <iostream>
#include <stack>

template <typename T>
void postORDER(Node<T>* root){
	if(root==NULL) return;

	for(int i=0;i<root->n_child;++i){
		postORDER(root->children[i]);
	}

	std::cout<<root->data<<" ";
	return;
}