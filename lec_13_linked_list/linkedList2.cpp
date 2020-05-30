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

void mid(node * head,int t){
	int k=0;
	node * tmp;
	tmp=head;
	while(k<t){
		tmp=tmp->link;
		++k;
	}

	cout<<tmp->data;
}

// node * bblsrt(node * head,int t){
// 	for(int i=0;i<t-1;++i){
// 		for(int j=0;j<t-i-1;++j){
// 			if(head->data > head->link->data){
// 				node * tmp=head;
// 				head=head->link;
// 				head->link=tmp;
// 				tmp->link=NULL;
// 			}
// 		}
// 	}

// 	return head;

// }

node *swaped(node * head){
	node * tmp=head;
	head=head->link;
	head->link=tmp;
	tmp->link=NULL;

	return head;
}

int main(){
	int n;	cin >> n;
	node * list = createList(n); //list is equivalent to head
	printList(list);
	// cout << getLen(list) << endl;
	// int toSearch; 	cin >> toSearch;
	// node * ans = findEle(list, toSearch); 
	// cout << ans <<  " " << ans->data << endl;

	int t=getLen(list);
	// cout<<t<<endl;
	// t=t/2;
	// cout<<t<<endl;
	// mid(list,t);

	// list=bblsrt(list,t);
	// printList(list);

	// list=swaped(list);
	// printList(list);
}