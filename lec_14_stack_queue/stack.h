class stack{
	int * arr;
	int top;
	int cursize;
	const int maxsize;
public:
	stack(int size);
	void push(int d);
	int pop();
	bool isempty() const;
	bool isfull() const;
	~stack();
	int getlen();
};