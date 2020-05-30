#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
int heightOFtree(Node<T>* root){
	if(root == 0) return 0;
	
	int H1=diameter(root->left);
	int H2=diameter(root->right);

	int hL=heightOFtree(root->left);
	int hR=heightOFtree(root->right);
	int myHeight = hL+hR+1;

	if(myHeight > H1 && myHeight > H2) return myHeight;
	if(H1 > myHeight && H1 > H2) return H1;
	else return H2;
}