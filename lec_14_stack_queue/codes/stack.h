class Stack{
	int * arr;
	const int maxSize;
	int curSize;
	int top;
public:
	Stack(int sze);
	Stack(const Stack& S);
	int push(int d);
	int pop();
	int getSize() const ;
	bool isEmpty() const;
	bool isFull() const;
	~Stack();
};