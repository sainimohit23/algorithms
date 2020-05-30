#include <list>
#include <iostream>
using namespace std;

int main(){
	list<int> l;
	l.assign(5, 10);
	for(auto it = l.begin(); it != l.end(); ++it){
		cout << *it << " ";
	}
}