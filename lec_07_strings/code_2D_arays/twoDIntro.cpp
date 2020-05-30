#include <iostream>
using namespace std;

int myFind(int arr[][4], int nr, int nc, int num){
	for(int r = 0; r < nr; ++r){
		for (int c = 0; c < nc; ++c){
			if(arr[r][c] == num){
				return 1;
			}
		}
	}
	return -1;
}

void input(int arr[][4], int nr, int nc){
	for(int r = 0; r < nr; ++r){
		for (int c = 0; c < nc; ++c){
			cin >> arr[r][c];
		}
	}
}

int main(){
	int arr[3][4];
	int nr, nc;
	cin >> nr >> nc;
	input(arr, nr, nc);
	int n;	cin >> n;
	int pos = myFind(arr, nr, nc, n);
	cout << pos;
	return 0;
}
	