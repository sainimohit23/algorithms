#include "bstNode.h"
#include "isBst.h"
#include "input.h"
#include "print.h"
#include "printRange.h"
#include <iostream>
#include "searchBst.h"
#include "isBalanced.h"
#include "sortedLL.h"
#include "sortedARR.h"
using namespace std;

int main(){
	BstNode<int> * tree = createTree<int>();
	// print(tree);
	// cout << endl;

	// int K1, K2;		
	// cin >> K1 >> K2;
	// printRange2(tree, K1, K2);

	// int toseach; cin >> toseach;
	// BstNode<int> *searchNode = searchBst(tree, toseach);
	// cout << searchNode->data ;

	// HBPair p = isBalanced(tree);
	// cout << p.height << " " << p.isBal;

	// LLNode sortedTree = sortedLL(tree);
	// printLL(sortedTree);


	// int arr[100]; int n;
	// cin >> n;
	// inputArr(arr, n);
	// BstNode<int> *tree = createBst(arr, 0, n - 1);
	print(tree);
	cout<<boolalpha<<isBst(tree);

}

