#include "Node.h"
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
Node<T>* TreeMaker(T * Pbe,T * Pen,T * Ibe,T * Ien){
	if(Pbe == Pen) return 0;

	Node<T> * root=new Node<T>(*Pen);
	T * index = std::find(Ibe,Ien, * Pen);
	int nEle = index-Ibe;

	root->left=TreeMaker(Pbe,Pbe+nEle+1,Ibe,index);
	root->right=TreeMaker(Pbe+nEle+1,Pen,index+1,Ien);

	return root;
}