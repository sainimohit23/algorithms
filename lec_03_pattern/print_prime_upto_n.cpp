//print prime upto n
#include <iostream>
using namespace std;

int main(){
	int n; 
	cin>>n;
	for(int curn=2;curn<=n;++curn){
		bool isprime=true;
		for(int div=2;div<curn;++div){
			if(curn % div ==0){
				isprime=false;	
				break;		
			}
		}
			if(isprime=true){
				cout<<curn<<"\n";
			}
	}
	return 0;
}