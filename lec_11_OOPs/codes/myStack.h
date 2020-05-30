class myStack{
private:
	// static const int MAXSIZE = 100;
	int arr[100];
	int size;
	int top;
public:
	myStack();
	// myStack(){}	//default ctor
	myStack(int [], int);
	void push(int val);
	int pop();
	int getSize();
	bool isEmpty();
	bool isFull();
};