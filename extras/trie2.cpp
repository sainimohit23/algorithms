#include <bits/stdc++.h>
using namespace std;

class Trie{
public:
	struct Trie * children[26];
	bool end;

	Trie(){
		end=false;
        for(int i=0;i<26;++i)children[i] = NULL;
	}

	void insert(string s){
		Trie * cur = this;
		for(int i=0;i<s.length();++i){
			if(cur->children[s[i] - 'a'] == NULL){
				cur->children[s[i] - 'a'] = new Trie();
			}
			cur = cur->children[s[i] - 'a'];
		}
		cur->end = true;
	}

	bool search(string s){
		Trie * cur = this;
		for(int i=0;i<s.length();++i){
			if(cur->children[s[i] - 'a'] == NULL) return false;
			cur = cur->children[s[i] - 'a'];
		}
		if(cur->end == true)return true;
		return false;
	}
};

int main(){
	Trie root;
	string s[]={"the", "a", "there", "answer", "any", "by", "bye", "their", "this" , "is"};

	int n= sizeof(s)/sizeof(s[0]);
	for(int i=0;i<n;i++) root.insert(s[i]);
	
	cout<<bool(root.search("answer"))<<" "<<bool(root.search("this"))<<" "<<bool(root.search("hello"))<<endl;
}