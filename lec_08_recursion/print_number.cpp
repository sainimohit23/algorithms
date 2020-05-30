#include <iostream>
using namespace std;

void chknum(int n){
	switch(n){
		case 1: cout<<"one"<<" ";break;;
		case 2: cout<<"two"<<" ";break;
		case 3 : cout<<"three"<<" ";break;
		case 4 : cout<<"four"<<" " ;break;
		case  5:cout<<"five"<<" ";break;
		case 6 : cout<<"six"<<" ";break;
		case 7 : cout<<"seven"<<" ";break;
		case 8 :cout<<"eight"<<" ";break;
		case 9 : cout<<"nine"<<" ";break;
		case 0 : cout<<"zero"<<" ";break;
	}
}

void num(int n){
	if(n>0){
	int rem=n%10;
	n=n/10;
	num(n);
	chknum(rem);
	}
}

int main(){
	int n;
	cin>>n;
	num(n);
}