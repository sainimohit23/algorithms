#include "node.h"
#include "helper.h"
#include <iostream>
using namespace std;

node * midfinder(node * head){
	node * slow=head;
	node * fast=head->link;

	while(fast!=NULL && fast->link!=NULL){
		slow=slow->link;
		fast=fast->link->link;
	}

	return slow;
}

node * merger(node * A,node * B){
	if(A==NULL) return B;
	if(B==NULL) return A;

	if(A->data < B->data){
		A->link=merger(A->link,B);
		return A;
	}
	else{
		B->link=merger(A,B->link);
		return B;
	}
}

node *  mergeSRT(node * head){
	if (head == NULL || head->link == NULL) return head;
	node * mid=midfinder(head);
	node * right=mid->link;
	node * left=head;
	mid->link=NULL;
	left=mergeSRT(left);
	right=mergeSRT(right);

	 node * ans=merger(left,right);
}

int main(){
	int t;
	cin>>t;
	node * A=createlist(t);

	node * sorted=mergeSRT(A);
	printlist(sorted);
	return 0;
}