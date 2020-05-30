#include "Node.h"
#include <queue>
#include <iostream>
using namespace std;

template <typename T>
void levelOrderOutput(Node<T>* root){
	if(root==0) return;
	queue<Node<T>* > q;
	q.push(root);
	q.push(0);

	while(q.empty()==false){
		Node<T>* curnode = q.front();
		q.pop();
		if(curnode==NULL){
			cout<<endl;
			// q.pop();
			if(q.empty()==false) q.push(0);
			continue;
		}

		cout<<curnode->data<<" ";
		for(int i=0;i<curnode->n_child;++i){
			q.push(curnode->children[i]);
		}
	}
}