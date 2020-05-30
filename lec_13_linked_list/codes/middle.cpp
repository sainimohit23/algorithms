#include <iostream>
#include "node.h"
#include "helper.h"
using namespace std;

node * middle(node * head){
	node * slow = head;
	node * fast = head;
	while(fast != NULL && fast->link != NULL){
		slow = slow->link;
		fast = fast->link->link;
	}
	return slow;
}

int main(){
	int n; 	cin >> n;
	node * list = createList(n);
	node * mid = middle(list);
	cout << mid << " " << mid->data;
	return 0;
}
	