#include <iostream>
using namespace std;

bool comp(const char str1[], char str2[]){
	int be1 = 0, be2 = 0;
	while(str1[be1] != '\0' && str2[be2]!= '\0'){
		if (str1[be1] != str2[be2]) return false;
		be1++;
		be2++;
	}
	if (str1[be1] == '\0' && str2[be2] == '\0') return true;
	return false;
}

bool mySearch(const char refer[][100], char inp[], int nWords){
	for(int w = 0; w < nWords; ++w){
		if (comp(refer[w], inp))
			return true;
	}
	return false;
}


int main(){
	const char arr[][100] = {
		"coding",
		"blocks",
		"is",
		"superb",
		"deepak sir", 
		"is",
		"awesome."
	};

	char inp[100];
	cin.getline(inp, 100);
	bool found = mySearch(arr, inp, 7);
	cout << found;
	return 0;
}
	