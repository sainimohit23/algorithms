#include <iostream>
using namespace std;

int main(){

	char  c;
	int cnt=0;
	cin>>c;

	while(c!='$'){
		++cnt;
		cin>>c;
	}

	cout<<cnt;

	return 0;
}