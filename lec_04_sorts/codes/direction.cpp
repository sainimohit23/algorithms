#include <iostream>
using namespace std;

int main(){
	int hor = 0;
	int ver = 0;
	char c;
	while(cin.get(c)){
		if (c == 'E') ++hor;
		else if (c == 'W') --hor;
		else if (c == 'N') ++ver;
		else --ver;
 	}
 	//printing East
 	while(hor > 0){
 		cout << 'E';
 		--hor;
 	}
 	//printing North
 	while(ver > 0){
 		cout << 'N';
 		--ver;
 	}
 	//printing south
 	while(ver < 0){
 		cout << 'S';
 		++ver;
 	}
 	//printing west
 	while(hor < 0){
 		cout << 'W';
 		++hor;
 	}
 	return 0;
}