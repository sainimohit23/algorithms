#include <iostream>
using namespace std;
int main(){
	int others = 0;
	int whitespaces = 0;
	int digits = 0;
	int alpha = 0;
	char c;
	while(c = cin.get()){
		if(c == '$'){
			break;
		}
		if (c >= '0' && c <= '9') {
			++digits;
		}
		else if (c >= 'A' && c <= 'Z'){
			++alpha;
		}
		else if(c >= 'a' && c <= 'z'){
			++alpha;
		}
		else if(c == '\n' || c == '\t' || c == ' '){
			whitespaces++;
		}
		else {
			++others;
		}
	}
	cout << "Alpabets " << alpha << "\n";
	cout << "Digits " << digits << "\n";
	cout << "whitespaces " << whitespaces << "\n";
	cout << "Others " << others << "\n";
	return 0; 


}