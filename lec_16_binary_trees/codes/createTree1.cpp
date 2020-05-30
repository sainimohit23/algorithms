#include <iostream>
#include <algorithm>
using namespace std;

int inorder[100];
int preorder[100];

struct Node{
	Node * left;
	Node * right;
	int data;
	Node(int d){
		left = right = 0;
		data = d;
	}
};

void inputArr(int arr[], int n){
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
}

void print(Node * tree){
	if (tree == 0) return;
	cout << tree->data << " ";
	print(tree->left);
	print(tree->right);
}

int endArr(int x){
	return x + 1;
}

// Node * createTree(int pre_be, int pre_en, int in_be, int in_en){
// 	if (pre_be > pre_en) return 0;

// 	int * index = find(inorder + in_be, inorder + endArr(in_en), preorder[pre_be]);
// 	Node * root = new Node(preorder[pre_be]);

// 	int nEle = index - &inorder[in_be];
// 	int index_ = index - inorder;
// 	root->left = createTree(pre_be + 1, pre_be + nEle, in_be, index_ - 1);
// 	root->right = createTree(index_ + 1, pre_en, index_ + 1, in_en);
// 	return root;
// }



Node * createTree(int *pre_be, int *pre_en, int *in_be, int *in_en){
	if (pre_be == pre_en || in_be == in_en) return 0;

	Node * root = new Node(*pre_be);
	int * index = find(in_be, in_en, *pre_be);
	int nEle = index - in_be;
	cout<<nEle<<endl;
	root->left = createTree(pre_be + 1, pre_be + nEle + 1, in_be, index);
	root->right = createTree(pre_be + nEle + 1, pre_en, index + 1, in_en);
	return root;
}

int main(){
	int in_n;
	int pre_n;
	cin >> pre_n >> in_n;
	inputArr(preorder, pre_n);
	inputArr(inorder, in_n);

	// Node * tree = createTree(0, pre_n, 0, in_n);
	Node * tree = createTree(preorder, &preorder[pre_n], inorder, &inorder[in_n]);
	print(tree);
}