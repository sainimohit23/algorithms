#include <stack> 
#include <iostream>
using namespace std;

void copyStack(stack<int> &from,stack<int> &to,int n){

	while(from.empty()==false && n > 0){
		to.push(from.top());
		from.pop();
		--n;
	}
}

void reverseStackMine(stack<int> &s,stack<int> &tmp){
	int nELE=s.size();

	for(int i=0;i<s.size();++i){
		int k=s.top();
		// cout<<"top  "<<s.top()<<endl;
		s.pop();
		--nELE;
		copyStack(s,tmp,nELE);
		s.push(k);
		copyStack(tmp,s,nELE);
	}
}

void printStack(stack<int> &s,int n){
	stack<int> stk(s);

	for(int i=0;i<n;++i){
		cout<<stk.top()<<" ";
		stk.pop();
	}

	cout<<endl;
}

int main(){
	stack<int> S,tmp;

	int n;
	cin>>n;

	for(int i=0;i<n;++i){
		int d;
		cin>>d;
		S.push(d);
	}

	printStack(S,n);
	reverseStackMine(S,tmp);
	printStack(S,n);

	// copyStack(S,tmp,n);
	// printStack(tmp,n);
}