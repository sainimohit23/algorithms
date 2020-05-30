#include "Node.h"

template <typename T>
Node<T> * largest(Node<T> * root){
	if (root == 0) return 0;

	T max_data = root->data;
	Node<T> * ans_node = root;
	for(int i = 0; i < root->n_child; ++i){
		Node<T> * tmp = largest(root->children[i]);
		if (tmp != 0){
			if(max_data < tmp->data){
				max_data = tmp->data;
				ans_node = tmp;
			}
		}
	}
	return ans_node;
}