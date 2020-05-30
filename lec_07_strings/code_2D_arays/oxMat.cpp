#include <iostream>
using namespace std;
void input(char arr[][20], int nr, int nc){
	for(int r = 0; r < nr; ++r){
		for (int c = 0; c < nc; ++c){
			cin >> arr[r][c];
		}
	}
}

void output(char arr[][20], int nr, int nc){
	for(int r = 0; r < nr; ++r){
		for (int c = 0; c < nc; ++c){
			cout <<  arr[r][c];
		}
		cout << "\n";
	}
}


void myFill(char mat[][20], int n){
	//fill first and last row
	for(int c = 0; c < n; ++c){
		mat[0][c] = 'o';
		mat[n - 1][c] = 'o';
		mat[c][0] = 'o';
		mat[c][n - 1] = 'o';
	}

	//filling remaining
	--n;
	for(int r = 1; r < n; ++r){
		for(int c = 1; c < n; ++c){
			if(r % 2 == 0 && c % 2 == 0) mat[r][c] = 'o';
			else mat[r][c] = 'x';
		}
	}
}

int main(){
	char mat[20][20];
	int n; cin >> n;
	// input(mat, n, n);
	myFill(mat,n);
	output(mat, n, n);
	return 0;
}
	