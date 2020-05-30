#include "Node.h"
#include <queue>
#include <iostream>
using namespace std;

template <typename T>
Node<T>* levelOrderInput(){
	// cout << "Enter data for root node ";
	T data;	cin >> data;
	Node<T> *root = new Node<T>(data);
	queue<Node<T> *> nodes_rem;
	nodes_rem.push(root);
	
	while(nodes_rem.empty() == false){
		Node<T> * cur_node = nodes_rem.front();
		nodes_rem.pop();
		int nchild;
		// cout << "Enter no of children of Node " << cur_node->data << " ";
		cin >> nchild;

		cur_node->n_child = nchild;
		cur_node->children = new Node<T>*[nchild];
		if (nchild != 0){
			// cout << "Enter " << nchild << " children of node " << cur_node->data << endl; 
		}

		for(int i = 0; i < nchild; ++i){
			T d;
			cin >> d;
			Node<T> * tmp = new Node<T>(d);
			cur_node->children[i] = tmp;
			nodes_rem.push(tmp);
		}
	}
	return root;
}