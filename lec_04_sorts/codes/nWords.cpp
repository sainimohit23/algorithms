#include <iostream>
using namespace std;
int main(){
	char c;
	int words = 0, letters = 0, lines = 0;
	bool prevSpace, insideWord;

	while(c = cin.get()){
		if (c == '$') break;
		if (c == '\n') ++lines;
		else ++letters;

		//if c is a non-whitespace char
		if (c != ' ' && c != '\n' && c != '\t')	insideWord = true;

		//finding if word
		if (insideWord && 
			(c == ' ' || c == '\t' || c == '\n')){
			++words;
			insideWord = false;
		}
	}

	cout << "Letters\t" << letters << endl;
	cout << "Words\t" << words << endl;
	cout << "Lines\t" << lines << endl;
	//see I have used tab char
	return 0;
}