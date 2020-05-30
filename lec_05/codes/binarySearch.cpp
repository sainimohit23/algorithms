#include <iostream>
using namespace std;
int binSearch(int a[], int sze, int searchFor){
	int beg = 0;
	int en = sze - 1;

	while (beg <= en){
		int mid = (beg + en) / 2;
		if (a[mid] == searchFor) return mid;
		else if (a[mid] > searchFor){
			//searchFor is in left
			en = mid - 1;
		}
		else beg = mid + 1;
	}
	return -1;
}


int main(){
	int arr[100];
	int n; cin >> n;
	int x; cin >> x;
	//input
	for(int i = 0; i < n; ++i) 	cin >> arr[i];

	int index = binSearch(arr, n, x);
	cout << index;
}