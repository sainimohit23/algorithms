#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/castle-on-the-grid/problem

// INPUT EXAMPLES:
// 3
// .X.
// .X.
// ...
// 0 0 0 2

// 3
// ...
// .X.
// ...
// 0 0 1 2



int n;

int MovementRow[] = {-1, 1, 0, 0};
int MovementCol[] = {0, 0, 1, -1};

int nodes_in_next_layer = 0;
int nodes_left_in_layer = 1;
int moves = 0;
bool reachedEnd = false;
bool visited[100][100]={false};

void takeInput(char arr[100][100]){
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
}

void explore_neighbors(char arr[100][100], int curRow, int curCol, queue<int> &rq, queue<int> &cq){
    for(int i=0;i<4;++i){
        int rr = curRow + MovementRow[i];
        int cc = curCol + MovementCol[i];

        if(rr<0 || cc<0 || rr>=n || cc >= n) continue;

        if(visited[rr][cc] == true) continue;
        if(arr[rr][cc] == 'X') continue;

        rq.push(rr);
        cq.push(cc);
        visited[rr][cc] = true;
        nodes_in_next_layer++;
    }
}

int findMinSteps(char arr[100][100], int startX, int startY, int endX, int endY){
    queue<int> rq, cq;
    rq.push(startX);
    cq.push(startY);

    visited[startX][startY] = true;

    while(!rq.empty()){
        int curRow = rq.front();
        int curCol = cq.front();

        rq.pop();
        cq.pop();
        if(curRow == endX && curCol ==endY){
            reachedEnd = true;
            break;
        }

        explore_neighbors(arr, curRow, curCol, rq, cq);
        nodes_left_in_layer--;
        if(nodes_left_in_layer == 0){
            nodes_left_in_layer = nodes_in_next_layer;
            nodes_in_next_layer = 0;
            ++moves;
        }

    }
    if(reachedEnd) return moves;
    return -1;
}

int main(){
    cin>>n;

    char arr[100][100];
    takeInput(arr);
    int startX, startY, endX, endY;
    cin>>startX>>startY>>endX>>endY;


    int ans = findMinSteps(arr, startX, startY, endX, endY);

    cout<<ans;
    // for(int i=0;i<n;++i){
    //     for(int j=0;j<n;++j){
    //         cout<<visited[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}