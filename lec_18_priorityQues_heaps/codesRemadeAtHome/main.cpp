#include <iostream>
using namespace std;
#include "heap.h"

int main(){
	int n;
	cin>>n;
	Heap H;

	for(int i=0;i<n;++i){
		int x; cin>>x;

		H.push(x);
	}

	while(H.isempty() == false){
		cout<<H.smallest()<<" ";
		H.pop();
	}

	return 0;
}