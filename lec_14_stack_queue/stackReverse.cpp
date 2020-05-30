#include <iostream>
#include <stack>
using namespace std;

void copystack(stack<int> & to,stack<int> &from,int t){
	while(from.empty() == false && t > 0){
		to.push(from.top());
		from.pop();
		t--;
	}
}

void stackREV(stack<int> &A,stack<int> &tmp){
	int nEle=A.size();
	for(int i=0;i<nEle;++i){
		int topEle=A.top();
		A.pop();
		nEle--;
		copystack(tmp,A,nEle);
		A.push(topEle);
		copystack(A,tmp,nEle);
	}


}

void printStack(const stack<int>& s){
	stack<int> tmp(s);
	while(tmp.empty() == false){
		cout << tmp.top() << " ";
		tmp.pop();
	}
	cout << endl;
}

int main(){
	int n;
	cin>>n;
	stack<int> A,tmp;

	for(int i=0;i<n;++i){
		int d;
		cin>>d;
		A.push(d);
	}
	printStack(A);
	stackREV(A,tmp);
	printStack(A);
}