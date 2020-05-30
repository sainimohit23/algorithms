#include <bits/stdc++.h>
using namespace std;

// For directed unweighted graphs
// Sample Input
// 4 3
// 0 1 
// 0 3 
// 2 0 


class Graph{
    int nV;
    vector<int> * adj;

public:
    Graph(int nV){
        this->nV = nV;
        adj = new vector<int>[nV];
    }

    void addEdge(int src, int dest){
        adj[src].push_back(dest);
    }

    void dfs(int src, bool visited[]){
        visited[src] = true;
        cout << src << " ";
        for(auto neigbor = adj[src].begin(); neigbor != adj[src].end(); ++neigbor){
            if (visited[*neigbor] == false){
                dfs(*neigbor, visited);
            }
        }
    }

    void topologicalSort(){
        vector<int> inDegree(nV, 0);
        for(int i=0;i<nV;++i){
            for(vector<int>::iterator it = adj[i].begin(); it != adj[i].end(); ++it){
                ++inDegree[*it];
            }
        }

        queue<int> q;
        for(int i = 0; i < nV; ++i){
            if (inDegree[i] == 0) q.push(i);
        }

        vector<int> ans;

        while(!q.empty()){
            int curVertex =  q.front();
            q.pop();
            ans.push_back(curVertex);

            for(auto it= adj[curVertex].begin(); it != adj[curVertex].end(); ++it){
                --inDegree[*it];
                if(inDegree[*it] == 0) q.push(*it);
            }
        }

        for(int i=0;i<nV;++i){
            cout<<ans[i]<<" ";
        }
    }

};




int main(){
    int n, e;
    cin>>n>>e;
    Graph g(n);

    for(int i=0;i<e;++i){
        int x, y;
        cin>>x>>y;
        g.addEdge(x, y);
        // g.addEdge(y, x);
    }

    // bool visited[n]={false};
    // g.dfs(0, visited);
    cout<<endl;
    g.topologicalSort();    
}