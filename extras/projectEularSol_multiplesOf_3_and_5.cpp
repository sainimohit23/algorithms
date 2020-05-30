#include <iostream>
#include <vector>
using namespace std;

int main(){
	long long int  N,num,three,five,fifteen=0;
	cin>>N;

	for(int i=0;i<N;i++){
	    cin>>num;

	    three=(num-1)/3;
	    five=(num-1)/5;
	    fifteen=(num-1)/15;

	    cout << 3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fifteen*(fifteen+1)/2)<<endl; //or use the formula for arithmetic progression

	}
return 0;
}