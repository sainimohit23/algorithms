#include <iostream>
#include <typeinfo>
using namespace std;

void print(int arr[][4], int nr, int nc){
	for(int col = 0; col < nc; ++col){
		int curRow = (col % 2 == 1) ? nr - 1 : 0;
		int endRow = (col % 2 == 1) ? 0 : nr - 1;
		int mul = (col % 2 == 1) ? -1 : 1;
		while(mul * curRow <= endRow){
			cout << arr[curRow][col] << " ";
			curRow += mul;
		}
		cout << endl;
	}	
}

int main(){
	int arr[][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	// cout << type;

	print(arr, 3, 4);
	return 0;
}
	