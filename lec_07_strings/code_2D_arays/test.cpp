#include <iostream>
using namespace std;
int main(){
	// int arr[10];
	// cout << arr << endl;
	// cout << (arr + 1) - arr << endl;
	// cout << (&arr + 1) - &arr << endl;
	// char arr[][4] = {{'1','2','3', '\0'}, 
	// 	{'4','5','6', '\0'}, 
	// 	{'7','8','9', '\0'}};

	// cout <<arr << endl;
	// cout << arr+1 << endl;
	// cout << *(arr+1) << endl;
	// cout <<arr[0] << endl;
	// cout  <<*(arr[0]) << endl;
	// cout << &arr[0][0] << endl;
	// cout << arr[0] + 1 << endl;
	// cout << (&arr[0][0]) + 1 << endl;
	// cout << arr+1 << endl;
	// cout << &arr[1][0] << endl;

	int arr[4][3];
	int (*p)[3] = arr[0] + 1;
	return 0;
}
	