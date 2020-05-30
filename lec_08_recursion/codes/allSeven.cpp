#include "helper.h"

void allSeven(int arr[], int be, int  n, int ans[], int & sz){
	if (be == n) return;

	if (arr[be] == 7){
		ans[sz] = be;
		++sz;
	}
	allSeven(arr, be + 1, n, ans, sz);

}



int main(){
	int arr[100]; int n;
	cin >> n;
	inpIntArr(arr, n);

	int ans[100]; int sz = 0;
	allSeven(arr, 0, n, ans, sz);
	outIntArr(ans, sz);
	return 0;
}