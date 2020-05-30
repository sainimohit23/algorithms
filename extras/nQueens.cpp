#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define n 10
bool isSafe(int arr[n][n], int row, int col, int size){
    for(int i=0;i<col;++i){
        if(arr[row][i]){
            // cout<<"in first"<<endl;
            return false;
        }
    }

    for(int i=row,j=col; i>=0 && j>=0; --i, --j){
        if(arr[i][j]){
            // cout<<"in sec"<<endl;
            return false;
        }
    }

    for(int i=row,j=col; i<size && j>=0; ++i, --j){
            // cout<<"r:"<<i<<" "<<"c:"<<j<<endl;
        if(arr[i][j]){
            // cout<<"in thi"<<endl;
            return false;
        }
    }
    return true;
}


bool nQueens(int arr[n][n], int col, int size){
    if(col >= size) return true;

    for(int i=0;i<size;++i){
        if(isSafe(arr, i, col, size)){
            arr[i][col] = 1;
            if(nQueens(arr, col+1, size)){
                return true;
            }
            // cout<<"backtrack"<<endl;
            arr[i][col] = 0;
        }
    }
    // cout<<"reached here";
    return false;

}

int main(){
    int size;
    cin>>size;

    int arr[n][n];
    for(int i=0;i<size;++i){
        for(int j=0;j<size;++j){
            arr[i][j]=0;
        }
    }
    bool possible = nQueens(arr, 0, size);
    if(!possible){
        cout<<"Not possible";
        return 0;
    }
    for(int i=0;i<size;++i){
        for(int j=0;j<size;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}