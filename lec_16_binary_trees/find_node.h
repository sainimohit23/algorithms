#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
Node<T>* findNode(Node<T>* root,T n){
	if(root==0) return 0;
	if(root->data == n) return root;

	Node<T> * L=findNode(root->left,n);
	Node<T> * R=findNode(root->right,n);

	if(L->data==n) return L;
	if(R->data==n) return R;

	else return 0;
}