// Solution 1. Explanation: https://leetcode.com/problems/longest-increasing-subsequence/discuss/398234/Binary-Search-solution-with-C%2B%2B-(nlogn)-Clear-and-explanation.
class Solution {
public:
  int lengthOfLIS(vector<int>& nums) {
    if(nums.size()==0) return 0;
  	vector<int> dp;
  	dp.push_back(nums[0]);
  	for(int i=1; i<nums.size(); i++) {
  		int pos = lower_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
  		if(pos == dp.size()) dp.push_back(nums[i]);
  		else dp[pos] = nums[i];
  	}
  	return dp.size();
  }
};


// Solution 2
class Solution {
public:
    int lengthOfLIS(vector<int>& arr){
        int n = arr.size();
        if(n==0)return 0;
        int dp[n];
        int ans=INT_MIN;
        
        for(int i=0;i<n;++i){
            dp[i]=1;
            for(int j=0;j<i;++j){
                if(arr[i]>arr[j] && dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};