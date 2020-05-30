#include "Node.h"
// Node<int>* maxNode(Node<int>* root, int& sum){
// 	if (root == 0){
// 		return 0;
// 	}

// 	int rootSum = root->data;
// 	Node<int> * ans = root;
// 	for(int i = 0; i < root->n_child; ++i){
// 			rootSum += root->children[i]->data;
// 	}

// 	for(int i = 0; i < root->n_child; ++i){
// 		int tmpSum = 0;
// 		Node<int> *tmp = maxNode(root->children[i], tmpSum);
// 		if (tmpSum > rootSum){
// 			rootSum = tmpSum;
// 			ans = tmp;
// 		}
// 	}
// 	sum = rootSum;
// 	return ans;
// }

class Pair{
public:
	Node<int> * maxnode;
	int sum;
	Pair(Node<int>* node = 0, int d = 0){
		maxnode = node;
		sum = d; 
	}
};

Pair maxNode(Node<int> * root){
	if (root == 0) {
		Pair p;
		return p;
	}

	Pair ans;
	ans.maxnode = root;
	ans.sum = root->data;
	for(int i = 0; i < root->n_child; ++i){
		ans.sum += root->children[i]->data;
}

	for(int i = 0; i < root->n_child; ++i){
		Pair tmp = maxNode(root->children[i]);
		if (tmp.sum > ans.sum){
			ans = tmp;
		}
	}
	return ans;
}