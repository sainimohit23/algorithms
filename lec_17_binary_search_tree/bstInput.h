#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
Node<T> * createTree(){
	T data;
	Node<T> * root=0;
	while(std::cin >> data && data!= -1){
		root=insertEle(root,data);
	}

	return root;
}

template <typename T>
Node<T> * insertEle(Node<T>* root,T d){
	if(root == 0){
		Node<T>* first = new Node<T>(d);
		return first;
	}

	if(root->data <= d) root->right = insertEle(root->right,d);
	else root->left = insertEle(root->left,d);

	return root;
}