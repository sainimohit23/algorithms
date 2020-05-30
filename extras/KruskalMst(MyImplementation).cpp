#include<bits/stdc++.h> 
using namespace std;

class Edge{
public:
    pair<int, int> vertices;
    int wt;

    Edge(int src, int dest, int wt){
        vertices.first = src;
        vertices.second = dest;
        this->wt = wt;
    }

};


class Graph{
    int nV;
    int nE = 0;
    vector<Edge> edges;
    unordered_map<int, int> parent;
    unordered_map<int, int> rank;
public:

    Graph(int nV){
        this->nV = nV;
    }

    void addEdge(int src, int dest, int wt){
        edges.push_back(Edge(src, dest, wt));
        nE++;
    }

    int find(int vertex){
        if(parent[vertex] == vertex){
            return vertex;
        }
        else{
            return find(parent[vertex]);
        }
    }

    void Union(int root1, int root2){
        if(rank[root1] > rank[root2]){
            parent[root2] =root1;
        }
        else if(rank[root1] < rank[root2]){
            parent[root1] = root2;
        }
        else{
            parent[root1] = root2;
            rank[root2]++;
        }
    }


    void kruskalMST(){
        
        for(int i = 0; i < nE - 1; ++i){
            for(int j = 0; j < nE - i - 1; ++j){
                if (edges[j].wt > edges[j + 1].wt){
                    Edge E1(edges[j].vertices.first, edges[j].vertices.second, edges[j].wt);
                    Edge E2(edges[j+1].vertices.first, edges[j+1].vertices.second, edges[j+1].wt);

                    edges[j] = E2;
                    edges[j+1] = E1;
                }
            }
        }

        vector<Edge> v;

        for(int i=0;i<nV;++i){
            parent[i] =  i;
            rank[i] = 0;
        }

        for(auto it = edges.begin(); it!=edges.end(); ++it){
            int root1 = find((*it).vertices.first);
            int root2 = find((*it).vertices.second);

            if(root1 != root2){
                Union(root1, root2);
                v.push_back(Edge((*it).vertices.first, (*it).vertices.second, (*it).wt));
            }
        }

        for(auto it = v.begin(); it!= v.end();++it){
            cout<<it->vertices.first<<"-"<<it->vertices.second<<" : "<<it->wt<<endl;
        }

    }

};


int main(){
	Graph g(6);

    // This algorithm is giving different answer from prim's algorithm
    // Reason : https://math.stackexchange.com/questions/518545/can-prims-and-kruskals-algorithm-yield-different-min-spanning-tree
    g.addEdge(0,1,5);
    g.addEdge(0,2,6);
    g.addEdge(1,2,4);
    g.addEdge(2,3,6);
    g.addEdge(3,4,8);
    g.addEdge(3,5,7);
    g.addEdge(4,5,2);

    g.kruskalMST();
    cout<<endl;

    return 0;
} 