#include <iostream>
#include "node.h"
#include "helper.h"
using namespace std;


Node*midNode(Node*head){

	Node*fast = head->next;
	Node*slow = head;

	while(fast!=NULL && fast->next!= NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
return slow;
}

Node*merge(Node *a, Node*b){
	if(a==NULL)
		return b;
	if(b==NULL)
		return a;
	Node*newHead;
	if(a->data < b->data){
		newHead = a;
		a->next = merge(a->next,b);
	}
	else{
		newHead = b; 
		b->next = merge(a,b->next);
	}
	return newHead;
}

Node*mergeSort(Node*head){
	if(head==NULL||head->next==NULL)
		return head;

	//Find the midnode
	Node*mid = midNode(head);
	Node*first  = head;
	Node*second = mid->next;
	mid->next = NULL;

	//Recursively sort the two linkedlists
	first = mergeSort(first);
	second = mergeSort(second);
	//merge the two sorted linked lists
	Node*newHead = merge(first,second);
	return newHead;
}

int main(){
	int n; 
	cin >> n;
	node * A = createList(n);
	A = mergeSort(A);
	// cin >> n;
	// node * B = createList(n);
	// node * ans = myMerge(A, B);
	printList(A);
	return 0;
}
	