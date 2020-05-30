#include "helper.h"
#include <algorithm>

void selectSort(int arr[], int be, int en){
	if(be > en){
		return;
	}
	
	int min = be;
	//min is the index at which the minimum ele is present
	for(int i = be + 1; i <= en; ++i){
		if(arr[i] < arr[min]){
			min = i;
		}
	}
	//swap ele at be and min
	swap(arr[min], arr[be]);
	//recursive call
	selectSort(arr, be + 1, en);
}

int main(){
	int arr[100]; int n;
	cin >> n;
	inpIntArr(arr, n);
	selectSort(arr, 0, n - 1);
	outIntArr(arr, n);
	return 0;
}