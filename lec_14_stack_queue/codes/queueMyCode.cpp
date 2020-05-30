#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node * next;

	Node(int d){
		data = d;
		next = 0;
	}
};

class queue{
	Node * front;
	Node * rear;
	int size;
public:

	queue(){
		front =0;
		rear =0;
		size =0;
	}

	void enqueue(int d){
		Node * n = new Node(d);

		if(front == 0){
			front=rear=n;
			++size;
		}
		else{
			rear->next=n;
			rear = n;
		}
		++size;
	}

	int dequeue(){
		if(size <= 0) return -1;

		if(front == rear){
			int ans = front->data;
			size==0;
			delete front;
			front = rear = 0;
			return ans;
		}
		else{
			int ans= front->data;
			Node *tmp = front->next;
			delete front;
			--size;
			front = tmp;
			return ans;
		}
	}

	int getSize() const {
		return size ;
	}

};

int main(){
	queue Q;

	Q.enqueue(5);
	Q.enqueue(6);

	cout<<Q.dequeue()<<endl;
	cout<<Q.dequeue()<<endl;
	cout<<Q.dequeue()<<endl;
	cout<<Q.dequeue()<<endl;
	
}