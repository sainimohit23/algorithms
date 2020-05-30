#include "Node.h"
#include <iostream>
#include <stack>
template<typename T>
void preOrder(Node<T> *root){
	if (root == 0) return;

	std::cout << root->data;
	for(int i = 0; i < root->n_child; ++i){
		preOrder(root->children[i]);
	}
}

template<typename T>
void preOrder(Node<T> *root, char iter){
	if (root == 0) return;
	std::stack<Node<T> *> s;
	s.push(root);
	while(s.empty() == false){
		Node<T> * cur = s.top();
		s.pop();
		std::cout << cur->data;
		for(int i = cur->n_child - 1; i >= 0; --i){
			s.push(cur->children[i]);
		} 
	}
}