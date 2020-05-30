#include <iostream>
using namespace std;
void pairX(int a[], int sze, int x){
	//for each element
	for(int i = 0; i < sze; ++i){
		//do something
		//for next rem ele check if (i and next sum to x)
		for(int st = i + 1; st < sze; ++st){
			if (a[i] + a[st] == x) {
				cout << a[i] << " " << a[st] << endl;
				break;
			}
		}
	}
}

int main(){
	int arr[100];

	int n, sum; cin >> n >> sum;
	//input
	for(int i = 0; i < n; ++i) 	cin >> arr[i];

	pairX(arr, n, sum);
	return 0;
}