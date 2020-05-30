#include <iostream>
using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	int arr[r][c],t;
	t=r*c;
	int arr1[t];

	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			cin>>arr[i][j];
		}
	}
	bool min=true;

	int curow=0,curcol=0;
	for(int i=0;i<t;++i){
		cout<<arr[curow][curcol]<<" ";
		
		if(min==true){
			if(curow!=r-1){
				++curow;
			}
			else{
				++curcol;
				min=false;
				continue;
			}
		}

		else{
			if(curow!=0){
				--curow;
			}
			else{
				++curcol;
				min=true;
			}
		}
	}

	return 0;
}