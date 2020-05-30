#include <iostream>
#include <cstring>
using namespace std;

void inp(char arr[][100], int n){
	for(int i = 0; i < n; ++i){
		cin.getline(arr[i], 100);
	}
}

int cmpWrd(char A[], char B[]){
	int beA = 0, beB = 0;
	while(A[beA] != '\0' && B[beB] != '\0' && A[beA] == B[beB]){
		beA++;
		beB++;
	}

	return A[beA] - B[beB];
}

void bubbleSort(char word[][100], int n){
	for(int w = 0; w < n - 1; ++w){
		for(int cur = 0; cur < n - w - 1; ++cur){
			// if (word[cur] is smaller than next word)
			// if (cmpWrd(word[cur], word[cur + 1]) > 0){
			if(strcmp(word[cur], word[cur + 1] > 0)){
			// 	swap word[cur], word[cur + 1]
				char tmp[100];
				// tmp = word[cur];
				strcpy(tmp, word[cur]);
				strcpy(word[cur], word[cur + 1]);
				strcpy(word[cur + 1], tmp);
			}
		}
	}
}

void out(char arr[][100], int n){
	for (int i = 0; i < n; ++i){
		cout << arr[i] << endl;
	}
}

int main(){
	char arr[10][100];
	int n;	cin >> n;
	cin.get();	//consumes endl
	inp(arr, n);
	bubbleSort(arr, n);		
	out(arr, n);
	return 0;
}
	