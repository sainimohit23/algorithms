#include <iostream>
#include "hashmap.h"
using namespace std;

int main(){
	Hashmap<int> m;
	m.insert("abc", 123);
	m.insert("def", 235);

	int ans = m.find("abc");
	cout << ans;
}