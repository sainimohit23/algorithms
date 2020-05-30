#include <stack> //standard header file 
#include <iostream>
using namespace std;

void copyStack(stack<int>& to, stack<int>& from, int n){
	while(from.empty() == false && n > 0){
		to.push(from.top());
		from.pop();
		n--;
	}
}

void myReverse(stack<int>& s, stack<int>& tmp){
	int nEle = s.size();
	for(int i = 0; i < s.size(); ++i){
		int topEle = s.top();
		s.pop(); nEle--;
		copyStack(tmp, s, nEle);
		s.push(topEle);
		copyStack(s, tmp, nEle);
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
	stack<int> s;
	stack<int> tmp;
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		int x; cin >> x;
		s.push(x);
	}
	printStack(s);
	myReverse(s, tmp);
	printStack(s);
}