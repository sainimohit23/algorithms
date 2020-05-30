#include <iostream>
#include <cstdlib>
using namespace std;

int myComp(const void * a, const void * b){
	return *(int*)a - *(int*)b;
}

int main(){
	int arr[] = {5,4,3,2,1};
	qsort(arr, 5, sizeof(int), myComp);
	for (int i = 0; i < 5; ++i) cout << arr[i] << " ";
	return 0;
}
	