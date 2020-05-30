#include <iostream>
using namespace std;

void input(int arr[][20], int nr, int nc){
	for(int r = 0; r < nr; ++r){
		for (int c = 0; c < nc; ++c){
			cin >> arr[r][c];
		}
	}
}

void printSpiral(int arr[][20], int nr, int nc){
	int startRow = 0, endRow = nr - 1;
	int startCol = 0, endCol = nc - 1;

	while(startRow <= endRow && startCol <= endCol){
		for(int c = startCol; c <= endCol; ++c){
			cout << arr[startRow][c] << " ";
		}
		++startRow;

		for(int r = startRow; r <= endRow; ++r){
			cout << arr[r][endCol] << " " ;
		}
		--endCol;

		if (startRow <= endRow){
			for(int c = endCol; c >= startCol; --c){
				cout << arr[endRow][c] << " ";
			}
			--endRow;
		}

		if (startCol <= endCol){
			for(int r = endRow; r >= startRow; --r){
				cout << arr[r][startCol] << " ";
			}
			++startCol;
		}
	}
}

int main(){
	int arr[20][20];
	int nr, nc;
	cin >> nr >> nc;
	input(arr, nr, nc);
	printSpiral(arr, nr, nc);
	return 0;
}