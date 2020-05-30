#include <iostream>
using namespace std;
int fibo(int n){
	if(n==1) return 0;
	if(n==2) return 1;

	int	fibonacci=fibo(n-1)+fibo(n-2);

	return fibonacci;

}

int main(){
	int n;
	cin>>n;
	int num=fibo(n);
	cout<<num;
}