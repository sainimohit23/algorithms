#include <bits/stdc++.h>
using namespace std;


// https://www.hackerrank.com/challenges/sherlock-and-cost/problem

int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;++k){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i) cin>>arr[i];

        vector<vector<int>> dp(n, vector<int>(2, 0));
        dp[0][0]=0;
        dp[0][1]=0;

        for(int i=1;i<n;++i){
            dp[i][0] = max(dp[i-1][0], dp[i-1][1] + arr[i-1]-1);
            dp[i][1] = max(dp[i-1][0]+arr[i]-1, dp[i-1][1]+abs(arr[i]-arr[i-1]));
        }

        cout<<max(dp[n-1][0], dp[n-1][1])<<endl;
    }

    // int n;
    // cin>>n;

    // vector<vector<int>> dp(n, vector<int>(2, 5));
    // for(int i=0;i<n;++i){
    //     for(int j=0;j<2;++j){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}