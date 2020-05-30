#include <iostream>
using namespace std;

int main(){

	int curLine,n;

	curLine=1;

	cin >> n;

	while(curLine<=n){

		int val,nChar;

		if(curLine%2==0){
				val=0;

		}

		else{

			val=1;
		}


			nChar=1;

			while(nChar<=curLine){

				cout << val;

					val=1-val;

				nChar=nChar+1;
			}


			curLine=curLine+1;


	}
}