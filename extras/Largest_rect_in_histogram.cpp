class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        if(n==0)return 0;
        stack<int> s;
        int ans=INT_MIN;
        int i=0;
        while(i<n){
            if(s.empty() || arr[s.top()]<=arr[i]) s.push(i++);
            else{
                int tp = s.top();
                s.pop();
                
                int cur = arr[tp] * (s.empty()? i : i -  s.top()- 1);
                ans = max(ans, cur);
            }
        }
        
        while(!s.empty()){
            int tp = s.top();
                s.pop();
                int cur = arr[tp] * (s.empty()? i : i -  s.top()- 1);
                ans = max(ans, cur);
        }
        
        return ans;
    }
};