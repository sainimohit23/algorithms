#include <iostream>
using namespace std;

void printlist(node * head){
	node * cur=head;
	while(cur != NULL){
		cout<<cur->data<<"------>";
		cur=cur->link;
	}
	cout<< endl;
}

node * addnode(node * head,int d){
	if(head==NULL){
		head=new node(d);
		return head;
	}

	node * tmp=head;
	while(tmp->link!=NULL) tmp=tmp->link;
	tmp->link = new node(d);
	return head;
}

node * createlist(int n){
	node * head = 0;

	for(int i=0;i<n;++i){
		int d;
		cin>>d;
		head=addnode(head,d);
	}
	return head;
}

int getlen(node * head){
	int cnt=0;

	while(head!=NULL){
		cnt=cnt+1;
		head=head->link;
	}
	return cnt;
}