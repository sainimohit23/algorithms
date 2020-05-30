#include <iostream>
using namespace std;
int main(){
	int arr[100];
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	//insertion sort
	for(int i = 1; i < n; ++i){
		int tmp = arr[i];
		int pre = i - 1;
		while(pre >= 0 && arr[pre] > tmp){
		// while(arr[pre] > tmp && pre>= 0){
			arr[pre + 1] = arr[pre];
			--pre;
		}
		arr[pre + 1] = tmp;
	}

	//output
	for(int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}
	return 0;

}