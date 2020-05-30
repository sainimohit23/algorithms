#include <iostream>
#include "node.h"
using namespace std;

void printlist(node * head){

	node * cur=head;
	while(cur!=NULL){

		cout<<cur->data<<"----->";

		cur=cur->link;
	}

}

node * addnode(node * head,int d){
	if(head==NULL){	
		head = new node(d);
		return head;
	}

	node * tmp=head;
	while(tmp->link!=NULL) tmp=tmp->link;
	tmp->link=new node(d);
	return head;

}

node * createlist(int n){
	node * head=NULL;
	for(int i=0;i<n;++i){
		int d;
		cin>>d;
		head=addnode(head,d);
	}

	return head;
}

int main(){
	int d;
	cin>>d;
	node * head= createlist(d);

	printlist(head);

	return 0;

}