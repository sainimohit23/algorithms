#include <iostream>
using namespace std;

int sum(int a = 0, int b = 0){
	return a + b;
}

int main(){
	int ans = sum();
	int s = sum(2, 3);
	return 0;
}
	