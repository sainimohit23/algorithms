#include <iostream>
#include <cstring>
using namespace std;

void inpIntArr(int arr[], int sze){
	for(int i = 0; i < sze; ++i)	cin >> arr[i];
}

void outIntArr(int arr[], int sze){
	for(int i = 0; i < sze; ++i)	cout << arr[i] << " ";
}