#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
Node<T>* maxNode(Node<T>* root){
	if(root == 0) return 0;
	Node<T>* maximum=root;

	for(int i=0;i<root->n_child;++i){
		Node<T>* tmp=maxNode(root->children[i]);
		if(tmp->data > maximum->data){
			maximum=tmp;
		}
	}

	return maximum;
} 