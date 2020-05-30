#include <iostream>
using namespace std;

int main(){
	char choice;
	do{
		cout << "1 Add\n" 
			 << "2 Exit\n";

		cin >> choice;
		switch(choice){
			case '1'	: int a, b;	cin >> a >> b;
						cout << a + b << endl;
						break;
			case '2' 	: return 0;
		}
	}while(choice != 2);
}