#include "node.h"
#include "helper.h"
#include <iostream>
using namespace std;

node * midfinder(node * head){
	node * slow=head;
	node * fast=head->link;

	while(fast!=NULL && fast->link!=NULL){
		slow=slow->link;
		fast=fast->link->link;
	}

	return slow;
}

node * merger(node * A,node * B){
	if(A==NULL) return B;
	if(B==NULL) return A;

	if(A->data < B->data){
		A->link=merger(A->link,B);
		return A;
	}
	else{
		B->link=merger(A,B->link);
		return B;
	}
}

// node * merger(node * A,node * B){
// 	node * tmp=A,*tmp1=B,* head;
// 	while(tmp!=NULL && tmp1!=NULL){
// 		if(tmp==A && tmp1==B){
// 			if(tmp->data < tmp1->data){
// 				tmp->link=tmp1;
// 				head=tmp;
// 				tmp=tmp->link;
// 			}
// 			else{
// 				tmp1->link=tmp;
// 				head=tmp1;
// 				tmp1=tmp1->link;
// 			}
// 		}

// 		else{
// 			if(tmp->data < tmp1->data){
// 				tmp->link=tmp1;
// 				tmp=tmp->link;
// 			}
// 			else{
// 				tmp1->link=tmp;
// 				tmp1=tmp1->link;
// 			}
// 		}
// 	}

// 	return head;
// }

int main(){
	int t;
	cin>>t;
	node * A=createlist(t);
	
	node * B=createlist(t);

	node * ans=merger(A,B);
	printlist(ans);

	// node * mid=midfinder(A);

	// 	cout<< mid<<"  "<<mid->data;
	return 0;
}