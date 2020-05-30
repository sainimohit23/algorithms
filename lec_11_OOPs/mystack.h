class mystack{
private:
	int arr[100];
	int top;
	int size;
public:
	mystack();
	int pop();
	void push(int val);
	bool isempty();
	bool isfull();
	int getsize();

};