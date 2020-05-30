#include <iostream>
using namespace std;

int main(){


	int nlines,curline;

	cin>>nlines;

	for(curline=1;curline<=nlines;++curline){

		//space

		int space , a;

		a=nlines-curline;

		for(space=1;space<=a;++space){

			cout<<" ";
		}

		//values

		int curval,val,b;
		bool ismid=true;

		val=curline;
		curval=1;
		b=2*curline-1;

		while(curval<=b){

			cout<<val<<" ";
			++curval;

			if(val==b){

				ismid=false;
			}

			if(ismid==true){
				++val;
			}

			else{
				--val;
			}
		}


		cout<<endl;
	}


	return 0;
}