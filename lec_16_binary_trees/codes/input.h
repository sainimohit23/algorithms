#include "node.h"
#include <queue>
#include <iostream>
using namespace std;

template <typename T>
Node<T> * takeInput(){
	T d;	cin >> d;

	Node<T> *root = new Node<T>(d);
	queue<Node<T>* > q;
	q.push(root);

	while(q.empty() == false){
		Node<T> *cur = q.front();
		q.pop();
		//left child
		cin >> d;
		if (d != -1){
			Node<T> * tmp = new Node<T>(d);
			cur->left = tmp;
			q.push(tmp);
		}
		//right child
		cin >> d;
		if(d != -1){
			Node<T> * tmp = new Node<T>(d);
			cur->right = tmp;
			q.push(tmp);
		}
	}
	return root;
}