#include "node.h"
template <typename T>
Node<T> * findNode(Node<T> *root, T toSearch){
	if (root == 0) return 0;

	if (root->data == toSearch) return root;
	Node<T> *leftans = findNode(root->left, toSearch);
	if (leftans != 0) return leftans;
	else return findNode(root->right, toSearch);
}