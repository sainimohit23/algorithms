#include <queue>
#include <vector>
#include <iostream>
#include <functional>
using namespace std;

int main(){
	int arr[] = {10, 2, 4, 5, 19, 20, 42};
	int n = sizeof(arr)/sizeof(int);

	priority_queue<int, vector<int>, less<int> > maxPQ;
	int k; cin >> k;
	for(int i = 0; i < k; ++i) maxPQ.push(arr[i]);

	for(int i = k; i < n; ++i){
		if(arr[i] > maxPQ.top()){
			maxPQ.pop();
			maxPQ.push(arr[i]);
		}
	}

	while(!maxPQ.empty()){
		cout << maxPQ.top() << " ";
		maxPQ.pop();
	}
}
