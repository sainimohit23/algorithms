#include "bstNode.h"
#include <iostream>

struct listNode{
	int data;
	listNode *next;
	listNode(int d){
		data = d;
		next = 0;
	}
};

struct LLNode{
	listNode * head;
	listNode * tail;
	LLNode(listNode *h, listNode *t){
		head = h;
		tail = t;
	}
};



LLNode sortedLL(BstNode<int>* root){
	if(root == 0){
		return LLNode(0,0);
	}

	LLNode leftSubtree = sortedLL(root->left);
	listNode *newNode = new listNode(root->data);
	LLNode rightSubtree = sortedLL(root->right);


	LLNode ans(0,0);
	if (leftSubtree.head == 0) ans.head = newNode;
	else {
		ans.head = leftSubtree.head;
		leftSubtree.tail->next = newNode;
	}

	if(rightSubtree.head == 0){
		ans.tail = newNode;
	}
	else{
		newNode->next = rightSubtree.head;
		ans.tail = rightSubtree.tail;
	}

	return ans;
}

void printLL(LLNode n){
	listNode *beg = n.head;
	while(beg != 0){
		std::cout << beg->data << "-->";
		beg = beg->next;
	}
}