#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,2,3};
	cout << &arr[2] - arr << " ";
	cout << *(arr + 1);
}