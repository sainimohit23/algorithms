#include <iostream>
using namespace std;
void printStars(int n);	//function declartaion

int main(){
	int nRows;	cin >> nRows;

	for (int curRow = 1; curRow <= nRows; ++curRow){
		printStars(curRow);	//function calling
		cout << " ";
		printStars(nRows - curRow + 1);
		cout << endl;
	}
	return 0;
}
//function definition
void printStars(int n){
	for (int i = 1; i <= n; ++i) cout << '*';
}