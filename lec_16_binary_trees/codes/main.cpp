#include <iostream>
#include "node.h"
#include "input.h"
#include "output.h"
#include "countNode.h"
#include "heightTree.h"
#include "diameter.h"
#include "findNode.h"
#include "mirror.h"
#include "constructTree.h"
using namespace std;

void inputArr(int arr[] , int n){
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
}


int main(){
	// Node<int> * tree = takeInput<int>();
	// cout << countNode(tree) << endl;
	// cout << heightTree(tree) << endl;
	// cout << diameterfast(tree).d << endl;

	// int d; cin >> d;
	// Node<int>* searchfor = findNode(tree, d);
	// cout << searchfor;// << " " << searchfor->data << endl;

	// printTree<int>(tree);
	// Node<int> * mirrored = mirror(tree);
	// printTree(mirrored);

	int pre[100];
	int in[100];
	int n;
	cin >> n;
	inputArr(pre, n);
	inputArr(in, n);
	Node<int> * root = constructTree<int>(pre, pre + n, in, in + n);
	printTree(root);

}