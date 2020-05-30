#include <iostream>
using namespace std;

int main(){
	int arr[10];
	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	//check for every ele
	for(int i = 1; i < n; ++i){
		//get the current min
		int ele = arr[i];
		int cur = i;
		while(cur >= 0 && ele < arr[cur]){
			arr[cur] = arr[cur - 1];
			--cur;
		}
		arr[cur + 1] = ele;
	}

	for(int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}
	return 0;
}