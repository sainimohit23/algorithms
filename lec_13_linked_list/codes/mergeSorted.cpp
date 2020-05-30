#include <iostream>
#include "node.h"
#include "helper.h"
using namespace std;

node * mergeSorted(node * A, node * B){
	if (A == NULL) return B;
	if (B == NULL) return A;
	if (A->data < B->data){
		node * tmp = mergeSorted(A->link, B);
		A->link = tmp;
		return A;
	}
	else {
		B->link = mergeSorted(A, B->link);
		return B;
	}
}

int main(){
	int n;
	cin >> n;
	node * A = createList(n);
	cin >> n;
	node * B = createList(n);
	node * ans = mergeSorted(A,B);
	printList(ans);
	return 0;
}