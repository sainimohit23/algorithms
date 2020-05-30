#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/the-quickest-way-up/submissions/code/47911805

class Graph{
public:
	int nV;
	vector<int> * adj;

	Graph(int d){
		nV=101;
		adj = new vector<int>[nV];
	}

	void addEdge(int src, int dest){
		adj[src].push_back(dest);
	}

	void print(){
        for(int curVertex = 0; curVertex < nV; ++curVertex){
            cout << curVertex << ": ";

            for(auto it = adj[curVertex].begin();
                it != adj[curVertex].end(); ++it){
                cout << *it << "-->";
            }
            cout << endl;
        }
    }

    void shortestDistance(int src, int dest){
    	vector<int> dist(nV, -1);
    	queue<int> q;

    	q.push(src);
    	dist[src]=0;

    	while(!q.empty()){
    		int cur = q.front();
    		q.pop();

    		for(auto it=adj[cur].begin(); it != adj[cur].end();++it){
    			if(dist[*it] == -1){
    				dist[*it] = dist[cur]+1;
    				q.push(*it);
    			}
    		}
    	}

    	cout<<dist[dest]<<endl;
    }
};


int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> snakeLadder(101, 0);
		Graph g(100);
		int n, m;

		cin>>n;
		int x, y;
		for(int i=0;i<n;++i){
			cin>>x>>y;
			snakeLadder[x] = y;
		}
		cin>>m;
		for(int i=0;i<m;++i){
			cin>>x>>y;
			snakeLadder[x] = y;
		}


		for(int i=1;i<101;++i){
			for(int dice=1;dice<=6;++dice){
				int dest = i+dice;
				if(dest<101){
					if(snakeLadder[dest]!=0) dest = snakeLadder[dest];
					g.addEdge(i, dest);
				}
			}
		}

		bool visited[101]={false};
		// g.print();
		g.shortestDistance(1, 100);
		}
}