#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
int NofNodes(Node<T> * root){
	if(root== 0) return 0;
	int cnt=1;

	cnt=NofNodes(root->left) + NofNodes(root->right) + cnt;

	return cnt;
}