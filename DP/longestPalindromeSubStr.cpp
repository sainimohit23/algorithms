#include <bits/stdc++.h>
using namespace std;


string longestPalindromicSubstr(string str){
	int n = str.length();
	vector<vector<bool>> dp(n, vector<bool>(n, 0));
	int maxLen=1, start=0;;

	for(int i=0;i<n;++i){
		dp[i][i] = true;
	}

	for(int i=0;i<n-1;++i){
		if(str[i] == str[i+1]){
			dp[i][i+1] = true;
			start=i;
			maxLen=2;
		}
	}

	for(int k=3;k<=n;++k){
		for(int i=0;i<n-k+1;++i){
			int j = i + k - 1;
			if(dp[i+1][j-1] && str[i] == str[j]){
				dp[i][j] = true;
				if(k>maxLen){
					start=i;
					maxLen = k;
				}
			}
		}
	}

	string ans;
	for(int i=start;i<start+maxLen;++i){
		ans.push_back(str[i]);
	}

	return ans;
}

int main(){
	string str;
	cin>>str;

	cout<<longestPalindromicSubstr(str);
}