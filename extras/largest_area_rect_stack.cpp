#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;++i)cin>>arr[i];

    stack<int> s;
    int maxArea=INT_MIN;
    int i=0;
    while(i<n){
        if(s.empty() || arr[s.top()]<=arr[i]) s.push(i++);
        else{
            int tp=s.top();
            s.pop();

            int tmpArea = arr[tp] * (s.empty()?i: i-s.top()-1);
            if(tmpArea>maxArea)maxArea=tmpArea;
        }
    }

    while(!s.empty()){
        int tp=s.top();
        s.pop();

        int tmpArea = arr[tp] * (s.empty()?i: i-s.top()-1);
        if(tmpArea>maxArea)maxArea=tmpArea;        
    }

    cout<<maxArea;

}
