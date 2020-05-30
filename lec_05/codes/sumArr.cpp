#include <iostream>
using namespace std;
int sum(int a[], int n){
	cout << "size of a is " << sizeof(a) << endl;
	int ans = 0;
	for(int i = 0; i < n; ++i) ans += a[i];
	return ans;
}
int main(){
	int arr[100];
	cout << "size of arr is " << sizeof(arr) << endl;

	int n; cin >> n;
	//input
	for(int i = 0; i < n; ++i) 	cin >> arr[i];

	int s = sum(arr, n); 	//??
	cout << "Sum is " << s << endl;
	return 0;
}