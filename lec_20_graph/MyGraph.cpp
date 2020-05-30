#include <iostream>
#include <list>
#include <utility>
#include <queue>
using namespace std;

class Graph{
	int nV;
	list<int> *adj;

public:
	Graph(int n){
		nV = n;
		adj = new list<int>[nV];
	}

	void addEdge(int src,int dest){
		adj[src].push_back(dest);
		adj[dest].push_back(src);
	}

	void printer(){
		for(int i=0;i<nV;++i){
			cout<<i<<" : ";

			for(auto it= adj[i].begin();it != adj[i].end();++it){
				cout<<*it<<" ";
			}
			cout<<endl;
		}
	}

	void bfs(int src){
		bool visited[nV]={false};

		queue<int> q;
		cout<<src<<" ";
		q.push(src);
		visited[src] = true;
		while(q.empty() == false){
			int cur = q.front();
			q.pop();

			cout<<cur<<"-->";
			for(auto it = adj[cur].begin(); it != adj[cur].end(); ++it){
				if(visited[*it] == false){
					q.push(*it);
					visited[*it] = true;
				}
			}
		}
	}

	vector<int> shortestDist(int src){
		vector<int> dist(nV,-1);

		queue<int> q;
		q.push(src);
		dist[src] = 0;

		while(q.empty() == false){
			int cur = q.front();
			q.pop();
			for(auto it=adj[cur].begin(); it != adj[cur].end(); ++it){
				if(dist[*it] == -1){
					dist[*it] = dist[cur] +1;
					q.push(*it);
				}
			}
		}

		return dist;
	}
};

int main(){
	Graph g(6);

	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(3,4);
	g.addEdge(2,4);
	g.addEdge(2,5);
	g.addEdge(4,0);

	g.printer();
	cout<<endl<<endl;
	g.bfs(5);
	cout<<endl;

	vector<int> dist = g.shortestDist(1);

	for(int i=0;i<6;++i){
		cout<<dist[i]<<" ";
	}

	return 0;
}