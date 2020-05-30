#include "Node.h"
#include <queue>
#include <iostream>
using namespace std;

template <typename T>
Node<T>* levelOrderInput(){
	T data;
	cin>>data;
	Node<T> * root;
	root= new Node<T>(data);
	queue<Node<T>* > q;
	q.push(root);

	while(q.empty()==false){
		Node<T>* curnode=q.front();
		q.pop();

		int nChild;
		cin>>nChild;
		curnode->n_child=nChild;
		curnode->children=new Node<T>* [nChild];

		for(int i=0;i<nChild;++i){
			T d;
			cin>>d;
			Node<T> * tmp = new Node<T>(d);
			curnode->children[i]=tmp;
			q.push(tmp);
		}
	}

	return root;
}