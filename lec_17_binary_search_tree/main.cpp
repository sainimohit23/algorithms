#include <iostream>
#include "Node.h"
#include "bstInput.h"
#include "bstOutput.h"
#include "isBst.h"
using namespace std;

int main(){
	Node<int> * root=createTree<int>();
	output<int>(root);

	cout<<boolalpha<<isBst<int>(root);
}