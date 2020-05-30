#include "helper.h"

void myMerge(int left[], int beL, int enL,
			int right[], int beR, int enR,
			int arr[], int be
			){
	int X[100]; 
	int Y[100];
	int nX = enL - beL + 1;
	int nY = enR - beR + 1;

	for(int i = 0; i < nX; ++i) X[i] = left[i + beL];
	for(int i = 0; i < nY; ++i) Y[i] = right[i + beR];

	int k = be;
	int inX = 0, inY = 0;
	while(inX < nX && inY < nY){
		if(X[inX] < Y[inY]){
			arr[k] = X[inX];
			++inX; ++k;
		}
		else {
			arr[k] = Y[inY];
			++inY; ++k;
		}
	}

	while(inX < nX)	arr[k++] = X[inX++];
	while(inY < nY)	arr[k++] = Y[inY++];
}


void mergeSort(int arr[], int be, int en){
	if (be >= en) return ;

	int mid = (be + en) / 2;
	mergeSort(arr, be, mid);
	mergeSort(arr, mid + 1, en);
	myMerge(arr, be, mid, arr, mid + 1, en, arr, be);
}

int main(){
	int arr[100]; int n;
	cin >> n;
	inpIntArr(arr, n);
	mergeSort(arr, 0, n - 1);
	outIntArr(arr, n);
	return 0;



	// int L[] = {2,4,6};
	// int Y[] = {3,6,9};
	// myMerge(L, 0, 2, Y, 0, -1, arr, 0, 2);

}
