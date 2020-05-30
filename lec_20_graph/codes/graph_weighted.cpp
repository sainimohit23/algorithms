#include <iostream>
#include <list>
#include <vector>
#include <climits>		//INT_MAX
#include <queue>

using namespace std;

class Vertex{
public:
	int weight;
	int identity;
	Vertex(int i, int w){
		identity = i;		
		weight = w;
	}

	bool operator<(const Vertex& V) const{
		return weight < V.weight;
	}
};

class Graph{
	int sizeOfAdjList;
	int nV;
	list<Vertex> *adjList;
public:
	Graph(int n){
		sizeOfAdjList = n + 1;
		nV = n;		
		adjList = new list<Vertex>[sizeOfAdjList];
	}

	addEdge(int src, int dest, int wt){
		Vertex srcToDest(dest, wt);
		adjList[src].push_back(srcToDest);

		Vertex destToSrc(src, wt);
		adjList[dest].push_back(destToSrc);
	}

	vector<int> dijkstra(int src){
		vector<int> dist(sizeOfAdjList, INT_MAX);
		priority_queue<Vertex> q;
		
		Vertex srcVertex(src, 0);
		
		dist[src] = 0;
		q.push(srcVertex);
		while(q.empty() == false){
			Vertex cur = q.top();
			q.pop();
			int curWt = cur.weight;
			int curId = cur.identity;

			if (curWt > dist[curId]) continue;

			for(auto it = adjList[curId].begin();it != adjList[curId].end(); ++it){
				
				Vertex neighborVertex = *it;
				int calcWt = curWt + it->weight;
				if(calcWt < dist[it->identity]){
					neighborVertex.weight = calcWt;
					dist[it->identity] = calcWt;
					q.push(neighborVertex);
				}
			}
		}
		return dist;
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
	int t;
	cin>>t;

	for(int i=0;i<t;++i){
		int nV, nE,s,d,w;
		cin>>nV>>nE;

		Graph g(nV);
		for(int j=0;j<nE;++j){
			cin>>s>>d>>w;
			g.addEdge(s, d, w);
		}
		vector<int> ans = g.dijkstra(1);
		printContainer(ans.begin(), ans.end());

	}

}