#include <iostream>
using namespace std;
int main(){
	int arr[100];
	int n; cin >> n;
	//input
	int largest = -100000000;		//-ve infinty
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		if (arr[i] > largest){
			largest = arr[i];
		}
	}
	// int largest = arr[0];
	
	// for(int i = 0; i < n; ++i){
	// 	if (arr[i] > largest){
	// 		largest = arr[i];
	// 	}
	// }
	cout << largest << endl;
	return 0;
}