#include <stdio.h>
#include <stdlib.h>

// https://www.hackerrank.com/challenges/play-game/submissions/code/48556514

int main()
{ 
    int t;
    scanf("%d",&t);
    while(t--){
               int n;
               scanf("%d",&n);
               int temp=n-1;
               int val[n];
               long long int sum[n];
               while(temp>=0){
                              scanf("%d",&val[temp]);
                              temp--;
               }
               sum[0]=val[0];
               for(int i=1;i<=n-1;i++){
                       sum[i]=sum[i-1]+val[i];
               }
               
               long long int dp[n];
               dp[0]=val[0];
               dp[1]=val[0]+val[1];
               dp[2]=val[0]+val[1]+val[2];
               for(int i=3;i<n;i++){
                       dp[i]=val[i]+sum[i-1]-dp[i-1];
                       long long int temp=val[i]+val[i-1]+sum[i-2]-dp[i-2];
                       dp[i]=temp>dp[i]?temp:dp[i];
                       temp=val[i]+val[i-1]+val[i-2]+sum[i-3]-dp[i-3];
                       dp[i]=temp>dp[i]?temp:dp[i];
               }
               
               printf("%lld\n",dp[n-1]);
    }
   
return 0;   
}