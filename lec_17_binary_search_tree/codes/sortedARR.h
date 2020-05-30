#include "BstNode.h"

void inputArr(int arr[], int n){
	for(int i = 0; i < n; ++i){
		cin >> arr[i] ;
	}
}

BstNode<int> *createBst(int arr[], int be, int en){
	if (be > en) return 0;

	int mid = (be + en) / 2;
	BstNode<int> * root = new BstNode<int>(arr[mid]);
	root->left = createBst(arr, be , mid - 1);
	root->right = createBst(arr, mid + 1, en);
	return root;
}