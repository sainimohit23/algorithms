#include "Node.h"
#include <queue>
#include <iostream>
using namespace std;

template <typename T> 
void levelOrderOutput(Node<T>* root){
	if (root == 0) return;
	queue<Node<T>*> nodes_rem;
	nodes_rem.push(root);
	nodes_rem.push(0);

	while(nodes_rem.empty() == false){
		Node<T> * cur_node = nodes_rem.front();
		nodes_rem.pop();
		if (cur_node == 0){
			cout << endl;
			if (nodes_rem.empty() == false) nodes_rem.push(0);
			continue;
		}
		cout << cur_node->data << " ";
		for(int i = 0; i < cur_node->n_child; ++i){
			nodes_rem.push(cur_node->children[i]);
		}
	}
}