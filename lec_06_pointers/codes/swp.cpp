#include <iostream>
using namespace std;

void swp(int* var1, int* var2){
	int tmp = *var1;
	*var1 = *var2;
	*var2 = tmp;
}

int main(){
	int a , b;	
	cin >> a >> b;
	// int *p1, *p2;
	// p1 = &a;
	// p2 = &b;
	swp(&a, &b);
	cout << a << b;
	return 0;
}
	