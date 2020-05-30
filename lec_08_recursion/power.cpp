#include <iostream>
using namespace std;

int pow(int x, int n){
	if(n==0)return 1;

	int power=x*pow(x,n-1);
	return power;

}

int main(){
	int x,n;

	cin>>x>>n;
	int power=pow(x,n);
	cout<<power;
}