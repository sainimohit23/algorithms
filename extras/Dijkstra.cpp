#include <bits/stdc++.h>
using namespace std;

// For undirected graphs with non negative edge weights

// Sample Input
// 4 4
// 0 1 24
// 0 3 20
// 2 0 3
// 3 2 12



// HELP
// std::priority_queue
// template <class T, class Container = vector<T>,
//   class Compare = less<typename Container::value_type> > class priority_queue;
class CompareDist
{
public:
    bool operator()(pair<int,int> n1,pair<int,int> n2) {
        return n1.second>n2.second;
    }
};


class Graph{
    int nV;
    vector<pair<int, int>> * adj;

public:
    Graph(int nV){
        this->nV = nV;
        adj = new vector<pair<int, int>>[nV];
    }

    void addEdge(int src, int dest, int weight){
        adj[src].push_back(make_pair(dest, weight));
        adj[dest].push_back(make_pair(src, weight));
    }

    void dfs(int src,bool visited[],int wt){
        visited[src] = true;
        cout<<"Src : "<<src<<" and weight : "<<wt<<endl;

        for(auto it = adj[src].begin(); it != adj[src].end(); ++it){
            if(visited[ (*it).first ] == false){
                dfs( (*it).first , visited, (*it).second );
            }
        }
    }

    void dijkstra(int src){
        vector<int> dist(nV, INT_MAX);
        bool visited[nV] = {false};
        priority_queue<pair<int,int>, vector< pair<int,int> >, CompareDist> pq;
        dist[src] = 0;
        pq.push(make_pair(src, 0));

        while(!pq.empty()){
            pair<int, int> cur = make_pair(pq.top().first, pq.top().second);
            pq.pop();
            visited[cur.first] = true;
            if(dist[cur.first] < cur.second) continue;

            for(auto it = adj[cur.first].begin(); it!= adj[cur.first].end(); ++it){
                if(visited[it->first] ==true) continue;
                int newDist = dist[cur.first] + it->second;
                if(newDist < dist[it->first]){
                    dist[it->first] = newDist;
                    pq.push(make_pair(it->first, newDist));
                }
            }
        }

        for(int i=0;i<nV;++i){
            cout<<dist[i]<<" ";
        }

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
    }

    bool visited[n]={false};
    // g.dfs(0, visited, 0);
    g.dijkstra(0);
    
}