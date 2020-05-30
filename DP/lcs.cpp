#include <iostream>
#include <utility>
#include <queue>
#include <list>
#include <climits>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

void outArr(int arr[], int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




void findSubseq(int first[], int second[], int n, int m){

    int arr[n+1][m+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i == 0 || j==0){
                arr[i][j] = 0;
            }
            else if(first[i-1] == second[j-1]){
                arr[i][j] = 1 + arr[i-1][j-1];
            }
            else{
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
        }
    }

    int ans[arr[n][m]];
    int sze = arr[n][m]-1;
    int i=n,j=m;

    while(i>0 || j>0){
        if(arr[i-1][j] == arr[i][j]){
            i--;
        }
        else if(arr[i][j-1] == arr[i][j]){
            j--;
        }
        else{
            ans[sze] = first[i-1];
            --i;
            --j;
            --sze;
        }
    }

    outArr(ans, arr[n][m]);
}



int main(){
    int n, m;
    cin>>n>>m;

    int first[n], second[m];
    for(int i=0;i<n;++i){cin>>first[i];}
    for(int i=0;i<m;++i) {cin>>second[i];}

    findSubseq(first, second, n, m);
}