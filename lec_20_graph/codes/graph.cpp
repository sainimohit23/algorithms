
#include <iostream>
#include <list>
#include <queue>
#include <cstring>
using namespace std;

class Graph{
    int nV;
    int nE;
    list<int> *adjList;
    typedef list<int>::iterator lit;
    // list<int>* *adjList; 
    //adjList is a ptr that stores address of an array that contains ptrs to lists
public:
    Graph(int n){
        nV = n;
        nE = 0;
        adjList = new list<int>[nV];
    }

    void addEdge(int src, int dest, bool isDirectional = true){
        if (isDirectional == false){
            adjList[src].push_back(dest);
            adjList[dest].push_back(src);
            nE += 2;
        }
        else {
            adjList[src].push_back(dest);
            ++nE;
        }
    }

    void print(){
        for(int curVertex = 0; curVertex < nV; ++curVertex){
            cout << curVertex << ": ";

            for(list<int>::iterator it = adjList[curVertex].begin();
                it != adjList[curVertex].end(); ++it){
                cout << *it << "-->";
            }
            cout << endl;
        }
    }

    void dfs(int src, bool visited[]){
        visited[src] = true;
        cout << src << " ";
        for(auto neigbor = adjList[src].begin(); neigbor != adjList[src].end(); ++neigbor){
            if (visited[*neigbor] == false){
                dfs(*neigbor, visited);
            }
        }
    }

    void bfs(int src){
        bool visited[nV] = {0};
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while(q.empty() == false){
            int curVertex = q.front();
            q.pop();
            cout << curVertex << " ";
            for(lit neigbor = adjList[curVertex].begin(); neigbor != adjList[curVertex].end();
                ++neigbor){
                if (visited[*neigbor] == false){
                    q.push(*neigbor);
                    visited[*neigbor] = true;
                }
            }
        }
    }


    vector<int> shortestDist(int src, int dest){
        vector<int> dist(nV, -1);
        vector<int> parentOf(nV, -1);

        queue<int> q;
        q.push(src);
        dist[src] = 0;

        while(q.empty() == false){
            int curVertex = q.front();
            q.pop();
            for(auto neigbor = adjList[curVertex].begin(); 
                neigbor != adjList[curVertex].end();
                ++neigbor){
                if(dist[*neigbor] == -1){
                    dist[*neigbor] = dist[curVertex] + 1;
                    parentOf[*neigbor] = curVertex;
                    q.push(*neigbor);
                }
            }
        }

        cout << dest << "<--";
        int tmp = dest;
        while(tmp != src){
            cout << parentOf[tmp] << "<--";
            tmp = parentOf[tmp];
        }
        cout << endl;
        // cout << src << "\n";

        return dist;
    }


    vector<int> topological_sort(){
        vector<int> indegree(nV, 0);
        for(int curVertex = 0; curVertex < nV; ++curVertex){
            for(auto it = adjList[curVertex].begin();
                it != adjList[curVertex].end(); ++it){
                ++indegree[*it];
            }
        }

        queue<int> q;
        for(int i = 0; i < nV; ++i){
            if (indegree[i] == 0) q.push(i);
        }

        vector<int> ans;

        while(q.empty() == false){
            int curVertex =  q.front();
            q.pop();
            ans.push_back(curVertex);

            for(auto neigbor = adjList[curVertex].begin(); 
                neigbor != adjList[curVertex].end(); ++neigbor){
                --indegree[*neigbor];
                if(indegree[*neigbor] == 0) q.push(*neigbor);
            }
        }
        return ans;
    }
    
};

template <class T>
void printContainer(T be, T en){
    while(be != en){
        cout << *be << " ";
        ++be;
    }
    cout << endl;
}


int main(){
        // Graph g(7);
        // g.addEdge(0, 1, false);
        // g.addEdge(0, 2, false);
        // g.addEdge(1, 2, false);
        // g.addEdge(2, 3, false);
        // g.addEdge(1, 4, false);
        // g.addEdge(4, 5, false);
        // g.addEdge(5, 6, false);
        // g.addEdge(4, 6, false);

        // g.print();

        // vector<int> dist = g.shortestDist(0,4);  
        // printContainer(dist.begin(), dist.end());

    Graph g(4);
    g.addEdge(0, 1, true);
    g.addEdge(0, 3, true);
    g.addEdge(2, 0, true);
    // g.addEdge(2, 3, true);
    // g.addEdge(3, 4, true);
    // g.addEdge(3, 5, true);

    //ritesh
    // g.addEdge(0, 1, true);
    // g.addEdge(5, 1, true);
    // g.addEdge(2, 1, true);
    // g.addEdge(3, 1, true);
    // g.addEdge(4, 1, true);

    vector<int> topSort = g.topological_sort();
    printContainer(topSort.begin(), topSort.end());

    // Graph g(50);
    // int snakeLadder[50] = {0};
    // snakeLadder[2]       =       15;
    // snakeLadder[5]       =       7;
    // snakeLadder[9]       =       27;
    // snakeLadder[17]      =       4;
    // snakeLadder[18]      =       29;
    // snakeLadder[20]      =       6;
    // snakeLadder[24]      =       16;
    // snakeLadder[25]      =       35;
    // snakeLadder[32]      =       30;
    // snakeLadder[34]      =       12;

    // for(int cur_box = 1; cur_box <= 36; ++cur_box){
    //  for(int dice = 1; dice <= 6; ++dice){
    //      int dest_box = cur_box + dice;
    //      if(dest_box <= 36){
    //          if(snakeLadder[dest_box] != 0) dest_box = snakeLadder[dest_box];
    //          g.addEdge(cur_box, dest_box, true);
    //      }
    //  }
    // }    

    // vector<int> dist = g.shortestDist(1, 36);
    // printContainer(dist.begin(), dist.end());

}