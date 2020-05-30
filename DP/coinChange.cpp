// https://leetcode.com/problems/coin-change-2/


class Solution {
public:
    int change(int amount, vector<int>& arr) {
        int n = arr.size();
        int dp[n+1][amount+1];
        
        // youtube.com/watch?v=DJ4a7cmjZY0
        for(int i=0;i<amount+1;++i)dp[0][i]=0;
        for(int i=0;i<=n;++i)dp[i][0]=1;
        
        
        for(int i=1;i<=n;++i){
            for(int j=1;j<amount+1;++j){
                int withoutThisCoin = dp[i-1][j];
                int withThisCoin = j>=arr[i-1]? dp[i][j-arr[i-1]]: 0;
                
                dp[i][j] = withoutThisCoin + withThisCoin;
            }
        }
        return dp[n][amount];
    }
};