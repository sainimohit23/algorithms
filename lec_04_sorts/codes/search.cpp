#include <iostream>
using namespace std;
int main(){
	int arr[100];
	int n; cin >> n;
	//input
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	int searchFor;
	cin >> searchFor;
	bool isFound = false;
	for(int i = 0; i < n; ++i){
		if(arr[i] == searchFor){
			cout << searchFor << " found at index " << i << endl;
			isFound = true;
			break;
		}
	}

	if(isFound == false){
		cout << searchFor <<" not found in the array\n";
	}
	return 0;
}