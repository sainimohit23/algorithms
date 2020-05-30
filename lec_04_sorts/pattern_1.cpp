#include <iostream>
using namespace std;

int main(){

	int nlines,curline;

	cin>>nlines;

	for(curline=1;curline<=nlines;++curline){

		int curchar;

		for(curchar=1;curchar<=curline;++curchar){
			cout<<"*";
		}

		cout<<" ";

		int a;

		a=nlines+1-curline;

		for(curchar=1;curchar<=a;++curchar){

			cout<<"*";
		}

		cout<<" ";

		for(curchar=1;curchar<=a;++curchar){

			cout<<"*";
		}

		cout<<" ";

		for(curchar=1;curchar<=curline;++curchar){
			cout<<"*";
		}

		cout<<endl;


	}

	return 0;
}