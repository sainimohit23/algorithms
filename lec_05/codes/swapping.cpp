#include <iostream>
using namespace std;
void swp(int& a ,int& b);

//pass by value
// void swp(int a, int b){

//pass by reference
void swp(int& a, int& b){
	int tmp = a;
	a  = b;
	b = tmp;
}

int main(){
	int a, b;
	cin >> a >> b;
	swp(a, b);
	cout << a << b;
	return 0;

}