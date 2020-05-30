#include<bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/array-splitting/problem

int getPos(int sum[], int start, int end, int minus){
    for(int i=start; i<end; ++i){
        if(sum[i]-minus == sum[end] - sum[i]){
            return i;
        }
    }
    return -1;
}

int gameSum(int sum[], int start, int end, int minus){
    if(start >= end) return 0;
    int pos = getPos(sum, start, end, minus);
    if(pos == -1) return 0;

    return(1 + max(gameSum(sum, start, pos, minus), gameSum(sum, pos+1, end, sum[pos])));
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum[n];
    int tmpsum=0;

    for(int i=0;i<n;++i){
        cin>>arr[i];
        tmpsum += arr[i];
        sum[i] = tmpsum;
    }

    int minus=0;
    cout<<gameSum(sum, 0, n-1, minus);
}