#include <bits/stdc++.h>
using namespace std;
// Stable version

int main()
{   
    int n;
    cin>>n;
    int arr[n];
    int max = INT_MIN;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i] > max) max = arr[i];
    }

    int count[max+1] = {0};
    for(int i=0;i<n;++i){
        count[arr[i]]++;
    }

    for(int i=1;i<=max;++i){
        count[i] += count[i-1];
    }

    // for(int i=1;i<=max;++i){
    //     cout<<count[i]<<" ";
    // }
    // cout<<endl;
    int output[n];

    for(int i=n-1;i>=0;--i){
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }

    for(int i=0;i<n;++i){
        cout<<output[i]<<" ";
    }

    return 0;
}
