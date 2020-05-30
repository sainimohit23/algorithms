#include<bits/stdc++.h> 
using namespace std;

 
int main (int argc, const char * argv[]) {
    char arr[1000];
    cin.getline(arr, 1000);

    istringstream ss(arr);
    while(ss){
    	string word;
    	ss>>word;
    	cout<<word<<endl;
    }
}