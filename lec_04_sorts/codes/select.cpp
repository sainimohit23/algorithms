#include <iostream>
using namespace std;
int main(){
	int arr[100];
	int n; cin >> n;
	//input
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	//selection sort
	for(int i = 0; i < n; ++i){
		int minIndex = i;
		for(int j = i + 1; j < n; ++j){
			if(arr[j] < arr[minIndex])	minIndex = j;
		}
		//swapping
		int tmp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = tmp;
	}

	//print
	for(int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}
	return 0;
}