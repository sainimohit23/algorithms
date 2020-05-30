#include "helper.h"
using namespace std;

void mergeArr(int A[], int beA, int enA,
	int B[], int beB, int enB, 
	int ans[], int be, int en){

	int x[100], y[100];
	int sa = enA - beA + 1;
	int sb = enB - beB + 1;

	for(int i = beA; i <= enA; ++i)	x[i - beA] = A[i]; 
	for(int i = beB; i <= enB; ++i)	y[i - beB] = B[i]; 

	int ansi = be, ai= 0, bi = 0;
	while(ai < sa && bi < sb){
		if (x[ai] < y[bi]){
			ans[ansi] = x[ai];
			++ansi;
			++ai;
		}
		else {
			ans[ansi] = y[bi];
			++bi;
			++ansi;
		}
	}

	while(ai < sa){
		ans[ansi++] = x[ai++]; 
	}
	while(bi < sb){
		ans[ansi++] = y[bi++]; 
	}

}

void myMerge(int arr[], int be, int en){
	if (be >= en) return;

	int mid = (be + en) / 2;
	myMerge(arr, be, mid);
	myMerge(arr, mid + 1, en);
	mergeArr(arr, be, mid,
			arr, mid + 1, en, 
			arr, be, en);
}


int main(){
	int arr[100]; int n;
	cin >> n;
	inpIntArr(arr, n);
	myMerge(arr, 0, n - 1);
	outIntArr(arr, n);
	return 0;
}
	