#include <iostream>
using namespace std;

int main(){

	char c;
	int num=0,num2=0;
	cin>>c;
	
	while(c=cin.get()){

		if(c=='$'){

			break;
		}

		if(c==' '){
			++num;
		}

		if(c=='\n'){
			++num2;
		}

	}

	cout<<num<<endl;
	

	return 0;


}