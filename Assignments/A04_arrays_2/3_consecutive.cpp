#include <iostream>
using namespace std;
#include <cstring>
#include <algorithm>

int main(){
	char str[5000],str1[5000];
 	cin.getline(str,5000);

 	int n,i=0,j=0;
 	n=strlen(str);

 	while(i<n){
 		str1[j]=str[i];
 		++i;
 		while(str[i-1]==str[i]){
 			++i;
 		}
 		++j;
 	}

 	str1[j]='\0';

 	cout<<str1;
}