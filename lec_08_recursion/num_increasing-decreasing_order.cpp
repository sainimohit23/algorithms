#include <iostream>
using namespace std;
void inc(int i, int n){
	if(i<=n){
		cout<<i<<" ";
		inc(i+1,n);
	}
}

void dec(int n){
	if(n>0){
	cout<<n<<" ";

	dec(n-1);
	}
}

int main(){
	int n;
	cin>>n;
	int i=1;
	dec(n);
	cout<<endl;
	inc(i,n);
}