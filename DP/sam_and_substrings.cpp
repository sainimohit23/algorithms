#include <bits/stdc++.h>
using namespace std;
#define modVal 1000000007;

int main() {
    char arr[200005];
    cin>>arr;
    unsigned long long int weight = 1;
    unsigned long long int sum = 0;
    unsigned long long int start = strlen(arr);
    for(long long int i=strlen(arr)-1;i>=0;--i){
    	// cout<<"here: "<<i<<endl;
    	unsigned long long int curNum = arr[i] - '0';
    	sum = (sum+(curNum*weight*(i+1)))%modVal;
    	weight = (weight*10 + 1)%modVal;
    }
    cout<<sum;
}