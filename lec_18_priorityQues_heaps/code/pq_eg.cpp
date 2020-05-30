#include <queue>
#include <vector>
#include <iostream>
#include <functional>
using namespace std;

int main(){
	int arr[] = {10, 2, 4, 5, 19, 20, 42};
	int n = sizeof(arr)/sizeof(int);

	priority_queue<int, vector<int>, greater<int> > minPQ;
	int k; cin >> k;
	for(int i = 0; i < k; ++i) minPQ.push(arr[i]);

	for(int i = k; i < n; ++i){
		if(arr[i] > minPQ.top()){
			minPQ.pop();
			minPQ.push(arr[i]);
		}
	}

	while(!minPQ.empty()){
		cout << minPQ.top() << " ";
		minPQ.pop();
	}
}