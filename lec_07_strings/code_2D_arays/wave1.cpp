#include <iostream>
using namespace std;
void input(int arr[][20], int nr, int nc){
	for(int r = 0; r < nr; ++r){
		for (int c = 0; c < nc; ++c){
			cin >> arr[r][c];
		}
	}
}

void printWave(int arr[][20], int nr, int nc){
	for (int c = 0; c < nc; ++c){
		if (c % 2 == 1){
			for (int r = nr - 1; r >= 0; --r){
				cout << arr[r][c] << " ";
			}
		}
		else {
			for(int r = 0; r < nr; ++r){
				cout << arr[r][c] << " ";
			}
		}
	}
}

int main(){
	int arr[20][20];
	int nr, nc;
	cin >> nr >> nc;
	input(arr, nr, nc);
	printWave(arr, nr, nc);
	return 0;
}
	