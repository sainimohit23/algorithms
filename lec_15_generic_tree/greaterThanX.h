#include "Node.h"
#include <queue>
#include <iostream>
using namespace std;

template <typename T>
void greaterThanX(Node<T> * root,T d){
	if(root == 0) return;

	queue<Node<T>* > q;
	q.push(root);

	while(q.empty()== false){
		Node<T> * curnode=q.front();
		q.pop();
		if(curnode->data > d){
			cout<< curnode->data<<" ";
		}

		for(int i=0;i<curnode->n_child;++i){
			q.push(curnode->children[i]);
		}
	}

	return;
}