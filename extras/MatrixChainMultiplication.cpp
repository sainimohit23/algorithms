#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


void matrixChain(int arr[], int n){
	int dp[n][n];

	for(int i=1;i<n;++i){
		dp[i][i] = 0;
	}

	for(int l=2;l<n;++l){
		for(int i=1;i<n-l+1;++i){
			int j = i+l-1;
			dp[i][j] = INT_MAX;
			for(int k=i;k<j;++k){
				int q = dp[i][k] + dp[k+1][j] + arr[i-1]*arr[k]*arr[j];
				if(q<dp[i][j]){
					dp[i][j] = q;
				}
			}
		}
	}

	cout<<dp[1][n-1];
}



int main(){

	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;++i) cin>>arr[i];

	matrixChain(arr, n);
	return 0;
}