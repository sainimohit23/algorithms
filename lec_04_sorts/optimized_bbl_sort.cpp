#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;++i){
        bool swapped=false;
        for(int j=0;j<n-i-1;++j){

            if(arr[j]>arr[j+1]){
                int t;
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }


 return 0;
}