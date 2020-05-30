#include "node.h"
#include "helper.h"
#include <iostream>
using namespace std;

node * findELE(node * head,int d,node* &prev){
	prev=NULL;
	node * cur=head;

	while(cur->data!=d){
		prev=cur;
		cur=cur->link;
	}

	return cur;
}

node * deleELE(node * head,int d){
	node * prev=NULL;
	node * element=findELE(head,d,prev);

	if(prev==NULL && element!=NULL){
		head=element->link;
		delete element;
		return head;
	}

	else if(element !=NULL){
		prev->link=element->link;

		delete element;
		return head;
	}

}



int main(){
	int t;
	cin>>t;
	node * A=createlist(t);

	printlist(A);
	node * neww=deleELE(A,3);
	printlist(neww);
}