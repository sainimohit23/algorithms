#include "Node.h"
#include <iostream>
using namespace std;
void printAtK(Node<char>* root, int depth){
	if (root == 0) return ;

	if (depth == 0){
		cout << root->data << " ";
		return;
	}

	for(int i = 0; i < root->n_child; ++i){
		printAtK(root->children[i], depth - 1);
	}
}