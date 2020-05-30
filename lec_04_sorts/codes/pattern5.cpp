/*
* *** *** *
** ** ** **
*** * * ***

*/
#include <iostream>
using namespace std;
int main(){
	int nLines;	cin >> nLines;
	for(int curRow = 1; curRow <= nLines; ++curRow){
		//print just one line
		int totalStars = curRow;
		for(int star = 1; star <= totalStars; ++star){
			cout << "*";
		}
		cout << " ";
		totalStars = nLines - curRow + 1;
		for(int star = 1; star <= totalStars; ++star){
			cout << "*";
		}
		cout << " ";
		for(int star = 1; star <= totalStars; ++star){
			cout << "*";
		}
		cout << " ";
		totalStars = curRow;
		for(int star = 1; star <= totalStars; ++star){
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}