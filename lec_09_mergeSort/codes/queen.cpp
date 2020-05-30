#include "helper.h"
#include <cmath>
const int MYSIZE = 100;
int arr[MYSIZE];

bool check(int arr[], int n){
	for(int fr = 0; fr < n; ++fr){
		for(int tr = fr + 1; tr < n; ++tr){
			int fc = arr[fr];
			int tc = arr[tr];
			if (fc == tc) return false;
			if (abs(tr - fr) == abs(tc - fc)) return false;
		}
	}
	return true;
}

void queen(int n, int be){
	if (n == be ){
		if (check(arr, n)){
			outIntArr(arr, n);
			cout << endl;
		}
		return;
	}

	for(int i = 0; i < n; ++i){
		arr[be] = i;
		queen(n, be + 1);
	}

}

int main(){
	int n; cin >> n;
	queen(n, 0);
	return 0;
}
	