#include "Node.h"
#include <iostream>
#include <stack>

template <typename T>
void preORDER(Node<T>* root){
	if(root==NULL) return;

	std::cout<<root->data<<" ";
	for(int i=0;i<root->n_child;++i){
		preORDER(root->children[i]);
	}
	
	return;
}