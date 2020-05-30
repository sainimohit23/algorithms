class Pair{
public:
	Node<int> * maxnode;
	int sum;
	Pair(Node<int>* node = 0, int d = 0){
		maxnode = node;
		sum = d; 
	}
};