#include <bits/stdc++.h>
using namespace std;


// * Shortest Path for Direct Acyclic Graph.
// * Dijkstra only works for non negative edge weights.
// * This algorithm works for negative edge weights only in case of DAG's.
// **TRICK: Negate edge weights and run this algorithm to find longest path. Finding longest path is NP hard problem on normal graph.

// 4 4
// 0 1 24
// 0 3 20
// 2 0 3
// 2 1 10


// 8 13
// 0 1 3
// 0 2 6
// 1 4 11
// 1 3 4
// 1 2 4
// 2 3 8
// 2 6 11
// 3 4 -4
// 3 5 5
// 3 6 2
// 4 7 9
// 5 7 1
// 6 7 2

class Graph{
    int nV;
    vector<pair<int, int>> * adj;

public:
    Graph(int nV){
        this->nV = nV;
        adj = new vector<pair<int, int>>[nV];
    }

    void addEdge(int src, int dest, int wt){
        adj[src].push_back(make_pair(dest, wt));
    }

    void dfs(int src, bool visited[]){
        visited[src] = true;
        cout << src << " ";
        for(auto neigbor = adj[src].begin(); neigbor != adj[src].end(); ++neigbor){
            if (visited[neigbor->first] == false){
                dfs(neigbor->first, visited);
            }
        }
    }

    void dfsForTopsort(int src, vector<int> &visitedNodes,bool visited[]){
        visited[src] = true;
        for(auto neigbor = adj[src].begin(); neigbor != adj[src].end(); ++neigbor){
            if (visited[neigbor->first] == false){
                dfsForTopsort(neigbor->first, visitedNodes, visited);
            }
        }
        visitedNodes.push_back(src);
    }

    vector<int> topologicalSort(){
        bool visited[nV] = {false};
        vector<int> ans(nV);
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
        return ans;
    }


    vector<int> DAGShortestPath(int src){
        vector<int> topSort = topologicalSort();
        vector<int> dist(nV, INT_MAX);
        dist[src] = 0;

        for(int i=0;i<nV;++i){
            int cur = topSort[i];
            if(dist[cur] == INT_MAX) continue;
            for(auto it=adj[cur].begin(); it!= adj[cur].end(); ++it){
                int newDist = dist[cur] + it->second;
                if(newDist < dist[it->first]) dist[it->first]= newDist;
            }
        }
        return dist;
    }

};


int main(){
    int n, e;
    cin>>n>>e;
    Graph g(n);

    for(int i=0;i<e;++i){
        int x, y, z;
        cin>>x>>y>>z;
        g.addEdge(x, y, z);
        // g.addEdge(y, x);
    }

    // bool visited[n]={false};
    // g.dfs(2, visited);
    // cout<<endl;  
    // vector<int> ans = g.topologicalSort(); 
    // for(int i=0;i<ans.size();++i){
    //     cout<<ans[i]<<" ";
    // }

    vector<int> ans = g.DAGShortestPath(0);
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }
}