#include <bits/stdc++.h>
using namespace std;

long long int t =1;
map<tuple<int,int,int> , long long int> m;
class CompareDist
{
public:
    bool operator()(pair<int,int> n1,pair<int,int> n2) {
        return n1.second>n2.second;
    }
};


class Graph{
	int nV;
	list<pair<int, int>> * adj;
public:
	Graph(int nV){
		this->nV = nV;
		adj = new list<pair<int, int>>[nV];
	}

	void addEdge(int src,int dest,int wt){
		if(m[make_tuple(src, dest, wt)] != 1){
			m[make_tuple(src, dest, wt)] = 1;
			adj[src].push_back( make_pair(dest,wt) );
			adj[dest].push_back( make_pair(src,wt) );
		}
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

// HELP
// std::priority_queue

// template <class T, class Container = vector<T>,
//   class Compare = less<typename Container::value_type> > class priority_queue;


	void dijkistra(int src, int dest){
		vector<int> dist(nV, INT_MAX);
		priority_queue<pair<int,int>, vector< pair<int,int> >, CompareDist> pq;
		dist[src] = 0;
		pq.push(make_pair(src, 0));

		while(pq.empty() == false){
			int cur = pq.top().first;
			pq.pop();

			for(list<pair<int, int>>::iterator it = adj[cur].begin();it != adj[cur].end(); ++it){
				int index = (*it).first;
				int weight = (*it).second;

				if(dist[cur]+ weight < dist[index]){
					dist[index] = dist[cur]+ weight;
					pq.push(make_pair(index, dist[index]));
				}
			}
		}

		// for(int i=0;i<nV;++i){
		// 	if(i == src) continue;
		// 	else if(dist[i] == INT_MAX) cout<<-1<<" ";
		// 	else cout<<dist[i]<<" ";
		// }
		// cout<<endl;

		cout<<dist[dest];
	}	

};

int main(){
	int dest;
	ifstream f("dijModified.txt");
	Graph g(200);
	while(f){
		int x,y, z;
		f>>x>>y>>z;
		g.addEdge(x-1,y-1, z);
	}

	cin>>dest;

	f.close();
	bool visited[200]={false};
	g.dijkistra(0, dest-1);
	return 0;
}