#include <iostream>
using namespace std;
int lenStr(char arr[]){
	int i = 0;
	while(arr[i] != '\0') ++i; 
	return i;
}

void strApp(char A[], char B[]){
	int lenA = lenStr(A);
	int lenB = lenStr(B);

	int curIndA = lenA;
	for(int be = 0; be < lenB; ++be){
		A[curIndA] = B[be];
		++curIndA;
	}
	A[curIndA] = '\0';
}


int main(){
	char str1[100];
	char str2[100];
	cin.getline(str1, 10);
	cin.getline(str2, 10);
	strApp(str1, str2);
	cout << str1 << endl;
	return 0;
}

// 012345678911	//try this input
// 012345678	output