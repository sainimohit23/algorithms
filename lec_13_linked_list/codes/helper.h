#include <iostream>
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


