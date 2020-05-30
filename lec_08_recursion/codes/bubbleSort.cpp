#include "helper.h"
#include <algorithm>

void bubbleSort(int arr[], int be, int n){
	if (be == n) return;

	for(int i = be + 1 ; i < n; ++i){
		if (arr[i - 1] > arr[i]){
			swap(arr[i - 1], arr[i]);
		}
	}
	bubbleSort(arr, 0, n - 1);
}

int main(){
	int arr[100];
	int n;
	cin >> n;
	inpIntArr(arr, n);
	bubbleSort(arr, 0, n);
	outIntArr(arr, n);
	return 0;
}