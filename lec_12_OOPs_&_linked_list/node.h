#include <iostream>
struct node
{
	int data;
	node * link;

	node(int d){
		data =d;
		link=NULL;
	}
};