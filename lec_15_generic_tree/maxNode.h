#include "Node.h"
#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class Pair{
public:
	int sum;
	Node<T>* root;
	Pair(Node<T> * root=0,int d=0){
		sum=0;
		root=0;
	}
};

// Pair maxNode(Node<int>* root){
// 	if(root==0) {
// 		Pair t;
// 		return t;
// 	}

// 	Pair maxsum;
// 	maxsum.sum=root->data;
// 	queue<Node<int>* > q;
// 	q.push(root);

// 	while(q.empty()==false){
// 		Node<int>* curnode=q.front();
// 		q.pop();

// 		for(int i=0;i<curnode->n_child;++i){
// 			maxsum.sum += curnode->children[i]->data;
// 		}

// 		for(int i=0;i<curnode->n_child;++i){
// 			Pair tmp= maxNode(curnode->children[i]);
// 			if(tmp.sum > maxsum.sum){
// 				maxsum.sum = tmp.sum;
// 				maxsum.root = tmp.root;
// 			}
// 		}
// 	}

// 	return maxsum;
// }

template <typename T>
Pair<T> * maxNode(Node<T> * root){
	if(root == 0){
		Pair<T>* p;
		return p;
	}

	Pair<T>* ans;
	ans->sum=root->data;
	ans->root = root;

	for(int i=0;i<root->n_child;++i){
		ans->sum+= root->children[i]->data;
	}

	for(int i=0;i<root->n_child;++i){
		Pair<T> tmp=maxNode(root->children[i]);

		if(tmp->sum > ans->sum){
			ans->sum = tmp->sum;
			ans->root = tmp->root;
		}
	}

	return ans;

}