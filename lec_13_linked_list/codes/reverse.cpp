#include "node.h"
#include "helper.h"
using namespace std;

node * reverseList(node * head){
	//head == NULL is same as !head. Think WHY??
	if (!head || !head->link) return head;
	node * tmp = reverseList(head->link);
	head->link->link = head;
	head->link = NULL;
	return tmp;
}

int main(){
	int n;
	cin >> n;
	node * list = createList(n);
	node * sorted = reverseList(list);
	printList(sorted);
	return 0;
}