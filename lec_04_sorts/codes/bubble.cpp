#include <iostream>
using namespace std;
int main(){
	int arr[100];
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	//bubble sort
	//no of steps
	for(int i = 0; i < n - 1; ++i){
		for(int j = 0; j < n - i - 1; ++j){
			if (arr[j] > arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	//print
	for(int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}
	return 0;
}