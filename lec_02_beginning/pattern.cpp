#include <iostream>
using namespace std;

int main(){
int i,j,n;

i=1;
j=1;

cin >> n;

while(j<=n){

	while(i<=j){
		cout << i;
	
	i=i+1;
}
	j=j+1;
	
	cout << "\n";
}

return 0;
}