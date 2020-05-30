#include <iostream>
using namespace std;

int main(){
	int nthRow;
	cin >> nthRow;

	int startValue = (nthRow % 2 == 1)?  : 0;
	cout << startValue;
	return 0;
}