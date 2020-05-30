#include <iostream>
#include "node.h"
#include "helper.h"
using namespace std;
class mypair{
public:
	node * prev;
	node * cur;
};

mypair findEle(node * head, int toSearch){
	//return the node with the data
	mypair p;
	p.prev = NULL;
	p.cur = head;
	node * & cur = p.cur;	//reference variable
	node * &prev = p.prev;	//prev is an alias (second name) to p.prev

	while(cur->data != toSearch){
		prev = cur;
		cur = cur->link;
	}
	return p;
}



node *  deleteNode(node * head, int ele){
	mypair p = findEle(head, ele);
	node * toDelete  = p.cur;
	node * prev = p.prev;
	
	if (prev == NULL && toDelete){
		head =  toDelete->link;
		delete toDelete;
		return head;
	}
	else if(toDelete != NULL){
		prev->link = toDelete->link;
		delete toDelete;
	}
	return head;
}

int main(){
	int n;	cin >> n;
	node * list = createList(n);
	int ele; cin >> ele;
	list = deleteNode(list, ele);
	printList(list);
	return 0;
}
	