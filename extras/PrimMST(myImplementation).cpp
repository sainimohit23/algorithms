#include<bits/stdc++.h> 
using namespace std;

class Edge{
public:
    int src;
    int dest;
    int wt;

    Edge(int src, int dest, int wt){
        this->src = src;
        this->dest = dest;
        this->wt = wt;
    }
};


class CompareDist{
public:
    bool operator()(pair<int,int> n1,pair<int,int> n2) {
        return n1.second>n2.second;
    }
};


class Graph{
    int nV;
    list< pair<int,int> > *adj;
public:
    Graph(int n){
        nV = n;
        adj = new list< pair<int,int> >[nV];
    }

    void addEdge(int src,int dest,int wt){
        adj[src].push_back( make_pair(dest,wt) );
        adj[dest].push_back( make_pair(src,wt) );
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

    void PrimMst(int src){
        vector<int> key(nV,INT_MAX);
        vector<int> parent(nV, -1);
        vector<Edge> v;
        priority_queue<pair<int, int> , vector< pair<int,int> >, CompareDist> pq;
        vector<bool> isSeen(nV, false);
        vector<bool> isInTree(nV, false);
        
        pq.push(make_pair(src, 0));
        key[src] = 0;
        isSeen[src] = true;

        while(pq.empty() == false){
            int cur = pq.top().first;
            pq.pop();
            isSeen[cur] = true;

            if(parent[cur] != -1 && isInTree[cur] == false){
                v.push_back(Edge(parent[cur], cur, key[cur]));
                isInTree[cur] = true;
            }

            for(auto it=adj[cur].begin(); it!= adj[cur].end(); ++it){
                int idx = (*it).first;
                int wt = it->second;

                if(isSeen[idx] == false && wt < key[idx]){
                    key[idx] = wt;
                    parent[idx] = cur;
                    pq.push(make_pair(idx, wt));
                }
            }
        }

        
        for(auto it = v.begin(); it!= v.end();++it){
            cout<<it->src<<"-"<<it->dest<<" : "<<it->wt<<endl;
        }
    }
};

int main(){
	Graph g(6);

    g.addEdge(0,1,5);
    g.addEdge(0,2,6);
    g.addEdge(1,2,4);
    g.addEdge(2,3,6);
    g.addEdge(3,4,8);
    g.addEdge(3,5,7);
    g.addEdge(4,5,2);

    bool visited[6]={false};
    g.dfs(3,visited,0);

    int n;
    cin>>n;
    g.PrimMst(n);
    cout<<endl;

    return 0;
} 