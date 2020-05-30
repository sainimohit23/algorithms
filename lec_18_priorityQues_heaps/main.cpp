#include "heap1.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	heap H;
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		int x; cin >> x;
		H.push(x);
	}

	cout<<H.counthigh(1);
}