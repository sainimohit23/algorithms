#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char arr[3];
	cin.getline(arr, 3);
	cout << "len " << strlen(arr) << " " << arr << "\n";
	cin.getline(arr, 5);
	cout << "len " << strlen(arr) << " " << arr << "\n";

	// cin >> arr ; 	
	// cout << arr << endl;
	// cin.getline(arr, 10); 
	// cout << arr << endl;
	// cin.getline(arr, 10);
	// cout << arr << endl;



	// char arr[10];
	// cin >> arr;	cout << arr;
	// cin >> arr;	cout << arr;



	// char str[] = "Welcome";
	// char arr[] = {'W', 'e', 'l', 'c', 'o', 'm', 'e', '\0'};
	// // cout << (*str + 2) << endl;
	// cout << (arr + 5) << endl;
	return 0;
}
	