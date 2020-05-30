#include <iostream>
#include "node.h"
#include "input.h"
#include "levelOrderOutput.h"
#include "diameter.h"
#include "mirror.h"
#include "inOrder.h"
#include "postPreTreeMaker.h"

using namespace std;

void inputArr(int arr[] , int n){
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
}

int sumFinder(int d,Node<int> * root){
  if(root == 0) return 0;
    
    int summed = 0;
  int Lsum = sumFinder(d,root->left);
  int Rsum = sumFinder(d,root->right);
  
    if(root->data <= d) summed = Lsum + Rsum; 
    else if(root->data > d) summed = Lsum + Rsum + root->data;
    
    return summed;
}

int main(){
	Node<int> * tree = takeInput<int>();

	int val;
	cin>>val;
	cout<<findNode(tree, val);

}