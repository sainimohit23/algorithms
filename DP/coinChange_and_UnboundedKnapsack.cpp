#include <bits/stdc++.h>
using namespace std;


// https://www.hackerrank.com/challenges/unbounded-knapsack/problem

// Not for Coin Change
int solFinder(int c[],int m,int n){
    int arr[n+1], maxReached=0;
    arr[0]=1;

    for(int i=1;i<n+1;++i){
        arr[i]=0;
    }

    for(int i=0;i<m;++i){
        for(int j=c[i];j<n+1;++j){
            arr[j] += arr[j - c[i]];
            if(j>maxReached && maxReached <= n) maxReached = j;
        }
    }
    return maxReached;
}

int main(){
    int t;
    cin>>t;
    for(int x=0;x<t;++x){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        int ans = solFinder(arr,n,k);
        cout<<ans<<endl;
    }

    return 0;
}