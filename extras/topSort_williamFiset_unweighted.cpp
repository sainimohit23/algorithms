#include <bits/stdc++.h>
using namespace std;


// 4 4
// 0 1 24
// 0 3 20
// 2 0 3
// 2 1 10


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

    void dfsForTopsort(int src, vector<int> &visitedNodes,bool visited[]){
        visited[src] = true;
        for(auto neigbor = adj[src].begin(); neigbor != adj[src].end(); ++neigbor){
            if (visited[*neigbor] == false){
                dfsForTopsort(*neigbor, visitedNodes, visited);
            }
        }
        visitedNodes.push_back(src);
    }

    void topologicalSort(){
        bool visited[nV] = {false};
        int ans[nV];
        int i = nV-1;

        for(int cur = 0; cur<nV;++cur){
            if(visited[cur] == false){
                vector<int> visitedNodes;
                dfsForTopsort(cur, visitedNodes, visited);
                for(int j=0;j<visitedNodes.size();++j){
                    ans[i] = visitedNodes[j];
                    --i;
                }
            }
        }
        for(i=0;i<nV;++i){
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