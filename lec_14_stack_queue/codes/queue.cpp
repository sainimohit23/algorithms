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

class Queue{
	Node * front;	//head of ll
	Node * rear;	//tail of ll
	int size;
public:
	Queue(){
		front = 0;
		rear = 0;
		size = 0;
	}
	void enqueue(int d){
		//adds an element
		Node* newEle = new Node(d);
		if (front == 0){
			front = rear = newEle;
		}
		else {
			rear->next = newEle;
			rear = newEle;
		}
		++size;
	}
	int dequeue(){
		//deletes element
		if (size == 0) return -1;
		if (front == rear){
			int tmp = rear->data;
			delete front;
			front = rear = 0;
			--size;
			return tmp;
		}
		else {
			int t = front->data;
			Node * tmp = front->next;
			delete front;
			front = tmp;
			--size;
			return t;
		}
	}

	int getSize() const {
		return size ;
	}
};

int main(){
	Queue q;
	q.enqueue(2);
	q.enqueue(3); 
	// int a;
		// cin >> a;
	cout << q.dequeue();
	cout << " " ;
	cout << q.dequeue() << " " ;
	cout << q.dequeue();
}