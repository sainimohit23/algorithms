#include "helper.h"

int binSearch(int arr[], int be, int en, int key){
	if (be > en) return -1;

	int mid = (be + en) / 2;
	if (key == arr[mid]){
		return mid;
	}
	else if (key < arr[mid]){
		return binSearch(arr, be, mid - 1, key);
	}
	else {
		return binSearch(arr, mid + 1, en, key);
	}
}

int main(){
	int arr[100];
	int n, key;
	cin >> n >> key;
	inpIntArr(arr, n);
	int pos = binSearch(arr, 0, n - 1, key);
	cout << pos;
	return 0;
}