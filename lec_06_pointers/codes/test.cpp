#include <iostream>
using namespace std;

int func(int a[4]){
	cout << sizeof (a);
}


int main(){

	//int arr[3] = {1,2,3};
	// cout << arr[2] << endl;
	// cout << *(&arr[0]) << endl;
	// cout << *arr << endl;
	// int *ptr = arr;
	// cout << sizeof(arr) << endl;
	// cout << sizeof(ptr) << endl;
	//func(arr);




	// int a, b;
	// int * a, b;
	// int * a = NULL ;
	// // * a = 2000;
	// cout << *a;

	// int * a;
	// cout << a << endl;	//garbage
	// int b = 100;
	// a = &b;
	// cout << a << " " << *a;


	char amsg[20];
	char k;
	k=&amsg;
	cin>>amsg;
	cout<<k<<endl;
	cout<<amsg;
}