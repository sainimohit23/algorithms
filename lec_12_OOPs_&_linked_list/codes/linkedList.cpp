// not working program,, just for tutorial of concepts

#include <iostream>
#include "node.h"
using namespace std;

void printList(node * head){
	//printing list
	node * curNode = head;
	while (curNode != NULL){
		cout << curNode->data;
		curNode = curNode->link;
	}
}

node * addNode(node * head, int d){
	if (head == NULL){
		head = new node(d);
		return head;
	}

	node * tmp = head;
	while(tmp->link != NULL) tmp = tmp->link;
	tmp->link = new node(d);
	return head;
}

int main(){
	node A(5);				node * head=new node(5);
	node B(6);				head->link=new node(6);
							head->link->link=new node(7);
	A.link = &B;
	node * head = &A;

	//printing
	// cout << head.data; !!WRONG
	cout << (*head).data << " ";
	cout << (*head->link).data << " ";
	// cout << head ->link->data << " ";	!!SAME as 14
}