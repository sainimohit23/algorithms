#include "node.h"
#include <algorithm>
template <typename T>
Node<T> * constructTree(T *preBe, T *preEn, T *inBe, T *inEn){
	if (preBe == preEn) return 0;

	Node<T> * root = new Node<T>(*preBe);

	//finding root in inorder
	T * index = std::find(inBe, inEn, *preBe);
	int nEle = index - inBe;

	root->left = constructTree(preBe + 1, preBe + 1 + nEle, inBe, index);
	root->right = constructTree(preBe + 1 + nEle, preEn, index + 1, inEn);
	return root;
}