#include <iostream>
#include "node.h"
#include "helper.h"
using namespace std;

node * middle(node * head){
	node * slow = head;
	node * fast = head->link;
	while(fast != NULL && fast->link != NULL){
		slow = slow->link;
		fast = fast->link->link;
	}
	return slow;
}

node * mergeSorted(node * A, node * B){
	if (A == NULL) return B;
	if (B == NULL) return A;
	if (A->data < B->data){
		node * tmp = mergeSorted(A->link, B);
		A->link = tmp;
		return A;
	}
	else {
		B->link = mergeSorted(A, B->link);
		return B;
	}
}

node * myMergeSort(node * head){
	if (head == NULL || head->link == NULL) return head;
	node * mid = middle(head);
	node * right = mid->link;
	node * left = head;
	mid->link = NULL;
	left = myMergeSort(left);
	right = myMergeSort(right);
	node * sortedAns = mergeSorted(left, right);
}

int main(){
	int n;
	cin >> n;
	node * list = createList(n);
	node * sorted = myMergeSort(list);
	printList(sorted);
	return 0;
}
	