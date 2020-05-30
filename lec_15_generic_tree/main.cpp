#include <iostream>
#include "levelOrderInput.h"
#include "levelOrderOutput.h"
#include "Node.h"
#include "preOrder.h"
#include "largest.h"
#include "postOrder.h"
#include "greaterThanX.h"
#include "maxNode.h"
using namespace std;

int main(){
	Node<int> * tree = levelOrderInput<int>();
	// levelOrderOutput(tree);
	// cout << endl;

	// postORDER(tree);
	// cout<<endl;
	// preORDER(tree);
	// cout << endl;
	Pair<int> * biggest = maxNode<int>(tree);
	if (biggest->sum != 0) cout << biggest->sum<<" "<<biggest->root->data;
	// greaterThanX(tree,3);

	return 0;
}