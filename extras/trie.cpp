#include <bits/stdc++.h>
using namespace std;

class node{
public:
	unordered_map<char, node*> children;
	bool end;

	node(){
		end=false;
	}

	void insert(string s){
		node * cur = this;
		for(int i=0;i<s.length();++i){
			if(cur->children.find(s[i]) == cur->children.end()){
				cur->children[s[i]] = new node();
			}
			cur = cur->children[s[i]];
		}
		cur->end = true;
	}

	bool search(string s){
		node * cur = this;
		for(int i=0;i<s.length();++i){
			if(cur->children.find(s[i]) == cur->children.end()) return false;
			cur = cur->children[s[i]];
		}
		if(cur->end == true)return true;
		return false;
	}
};

int main(){
	node root;
	string s[]={"the", "a", "there", "answer", "any", "by", "bye", "their", "this" , "is"};

	int n= sizeof(s)/sizeof(s[0]);
	for(int i=0;i<n;i++) root.insert(s[i]);
	
	cout<<bool(root.search("answer"))<<" "<<bool(root.search("this"))<<" "<<bool(root.search("hello"));
}