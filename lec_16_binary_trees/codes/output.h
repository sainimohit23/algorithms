#include "node.h"
#include <queue>
#include <iostream>
using namespace std;
template <typename T>

void printTree(Node<T> *root){
	if (root == 0) return;

	queue<Node<T>* > q;
	q.push(root);
	q.push(0);
	while(q.empty() == false){
		Node<T> * front = q.front();
		q.pop();

		if (front == 0){
			//new level
			cout << endl;
			if (q.empty() == false) q.push(0);
			continue;
		}
		cout << front->data << " ";
		if (front->left != 0) q.push(front->left);
		if (front->right != 0) q.push(front->right);
	}
}