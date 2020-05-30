#include <iostream>
#include "levelOrderInput.h"
#include "levelOrderOutput.h"
#include "postOrder.h"
#include "Node.h"
#include "maxNode.h"
using namespace std;

// #include <utility>
// pair<Node<int> *, int> P;
// P.first;
// P.second;



int main(){
	Node<int> * tree = levelOrderInput<int>();
	// levelOrderOutput(tree);
	levelOrderOutput(tree);
	cout << endl;

	// int sum = 0;
	// Node<int> *ans = maxNode(tree, sum);
	// if (ans != 0) cout << ans->data << " " << sum << endl; 
	Pair ans = maxNode(tree);
	if (ans.maxnode != 0) cout << ans.sum << " " << ans.maxnode->data;

	// int ans = greaterThanX(tree,5);
	// cout << ans << endl;

	// postOrder(tree);
	// cout << endl;
	// preOrder(tree, 'i');
	// Node<char>* biggest = largest(tree);
	// if (biggest != 0) cout << biggest->data;
	return 0;
}