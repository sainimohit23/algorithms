#include <stack>
#include <iostream>
using namespace std;

bool isBalanced(char str[]){
	stack<char> s;
	for(int i = 0; str[i] != '\0'; ++i){
		char cur = str[i];
		switch(cur){
			case '(' : 
			case '{' : 
			case '[' : s.push(cur); //you can also use break here
		}

		if(cur == ')') {
			if(s.empty() == true || s.top() != '(') return false;
			else s.pop();
		}
		else if(cur == '}') {
			if(s.empty() == true || s.top() != '{') return false;
			else s.pop();
		}
		else if(cur == ']') {
			if(s.empty() == true || s.top() != '[') return false;
			else s.pop();
		}
	}
	return s.empty();
}

int main(){
	char inp[100];
	cin.getline(inp, 90);
	cout << boolalpha <<  isBalanced(inp);
}