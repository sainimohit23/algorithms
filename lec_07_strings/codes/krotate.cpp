#include <iostream>
#include <cstring>
using namespace std;
void kRotate(char arr[], int k){
	char tmp[100] = {};
	int len = strlen(arr);
	int start = len - k;
	
	//copies k charaters
	for(int beA = start, beT = 0; beA < len; ++beA) tmp[beT++] = arr[beA];

	//shift rem chars by k position
	for(int be = len - 1; be >= k; --be) arr[be] = arr[be - 1];

	//copy k chars
	for(int be = 0; be < k; ++be) arr[be] = tmp[be];
}

int main(){
	char arr[100];
	cin.getline(arr, 100);
	int k; cin >> k;
	kRotate(arr, k);
	cout << arr;
	return 0;
}
	