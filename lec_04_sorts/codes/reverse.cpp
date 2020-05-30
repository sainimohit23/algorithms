#include <iostream>
using namespace std;
int main(){
	int arr[100];	//array DECLARATION
	int n; 	cin >> n;	//n is assumed 
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	for(int i = n - 1; i >= 0; --i){
		cout << arr[i] << " ";
	}
	return 0;
}