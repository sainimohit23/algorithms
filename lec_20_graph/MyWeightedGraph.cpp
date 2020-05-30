#include <iostream>
#include <utility>
#include <queue>
#include <list>
#include <climits>
using namespace std;

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

	void dijkstra(int src){
		vector<int> dist(nV,INT_MAX);
		priority_queue< pair<int,int> , vector< pair<int,int> > , greater< pair<int,int>>> pq;

		pq.push(make_pair(src,0));
		dist[src] = 0;
		while(pq.empty() == false){
			int cur = pq.top().first;
			pq.pop();

			for(auto it = adj[cur].begin(); it != adj[cur].end(); ++it){
				int index = (*it).first;
				int wt = (*it).second;

				if(dist[cur] + wt < dist[index]){
					dist[index] = dist[cur] + wt;
					pq.push(make_pair(index,dist[index]));
				}

			}
		}

		for(int i=0;i<nV;++i){
			cout<<dist[i]<<" ";
		}
		cout<<endl;
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
	cout<<"Dijkstra's distance for vertex "<<n<<" is : ";
	g.dijkstra(n);
	cout<<endl;

	return 0;
}