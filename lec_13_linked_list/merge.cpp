#include <iostream>
#include "node.h"
using namespace std;
void printList(node * head){
	//printing list
	node * curNode = head;
	while (curNode != NULL){
		cout << curNode->data << "--->";
		curNode = curNode->link;
	}
	cout << endl;
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

node * createList(int  n){
	node * head = NULL;
	for(int i = 0; i < n; ++i){
		int d;	cin >> d;
		head = addNode(head, d);
	}
	return head;
}

int getLen(node * head){
	int cnt = 0;
	node * tmp = head;
	while(tmp != NULL){
		cnt++;
		tmp = tmp->link;
	}
	return cnt;
}

node * findEle(node * head, int toSearch){
	if (head == NULL) return NULL;
	//TODO head should not be null
	if (head->data == toSearch) return head;
	return findEle(head->link, toSearch);
}

node * merger(node * list,node * list1,int a){
	node * head;
	if(list1->data > list1->data){
		head=list1;
	}
	else{
		head=list;
	}

	for(int i=1;i<=a;++i){
		if(list->data > list1->data){
			list1->link=list;
			list1=list1->link;
		}
		else{
			list->link=list1;
			list=list->link;
		}

	}

}

int main(){
	int n,k;	cin >> n>>k;
	node * list = createList(n);
	node * list1 = createList(k);
	int size=getLen(list)+getLen(list1);

	node* head=merger(list,list1,size);
	 //list is equivalent to head
	// printList(list);
	// // cout << getLen(list) << endl;
	// int toSearch; 	cin >> toSearch;
	// node * ans = findEle(list, toSearch); 
	// cout << ans <<  " " << ans->data << endl;
	printList(head);
}