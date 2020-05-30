#include <bits/stdc++.h>
using namespace std;
#define modVal 1000000007;

// https://www.hackerrank.com/challenges/abbr/problem


bool isUpcase(char c){
    return (c >= 'A') && (c <= 'Z');
}

char upcase(char c){
    if (isUpcase(c)) return c;
    return (char)(c - 32);
}

int main() {
    int t;
    cin>>t;

    for(int k=0;k<t;++k){
        string a,b;
        cin>>a;
        cin>>b;

        vector< vector<bool>> dp(a.length()+1, vector<bool>(b.length()+1, false));
        dp[0][0] = true;
        for(int i=0;i<a.length();++i){
            for(int j=0;j<=b.length();++j){
                if(dp[i][j]){
                    if(j<b.length() && (upcase(a[i]) == b[j])) dp[i+1][j+1] = true;
                    if(!isUpcase(a[i])) dp[i+1][j] = true;
                }
            }
        }

        if(dp[a.length()][b.length()] == false)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}