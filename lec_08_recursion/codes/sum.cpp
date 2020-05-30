#include "helper.h"

int sumArr(int arr[], int n){
	if (n == 0) return 0;
	int smallerSum = sumArr(arr, n - 1);
	int bigSum = smallerSum + arr[n - 1];
	return bigSum;
}

int main(){
	int arr[100]; int n;
	cin >> n;
	inpIntArr(arr, n);
	int s = sumArr(arr, n);
	cout << s;
	return 0;
}