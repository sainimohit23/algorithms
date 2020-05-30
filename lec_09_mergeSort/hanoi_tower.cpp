#include <iostream>
using namespace std;

void hanoi(int n,char source,char desk,char helper){
	if(n==0){
		return;
	}

	hanoi(n-1,source,helper,desk);
	cout<<"Moving ring "<<n<<" from "<<source<<" to "<<desk<<endl;
	hanoi(n-1,helper,desk,source);
}

int main(){
	int n;
	cin>>n;

	hanoi(n,'A','B','C');
	return 0;
}