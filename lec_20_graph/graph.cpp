#include <iostream>
#include <list>

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
		for(int i=0;i<nV;++i){
			cout<<i<<" : ";
			for(list<int>::iterator it = adjList[i].begin();  it != adjList[i].end(); ++it){
				cout<< *it <<"-->";
			}
			cout<<endl;
		}
	}

	void dfs(int src,bool visited[]){
		visited[src] = true;
		cout<< src << " ";
		
		for(lit neighbour = adjList[src].begin(); neighbour != adjList[src].end(); ++neighbour){
			if(visited[*neighbour] == false){
				dfs(*neighbour,visited);
			}
		}
	}

	vector<int> shortestDist(int src,int dest){
		vector<int> dist(nV,0);
		
	}
};

int main(){
	Graph g(5);
	g.addEdge(0,1, false);
	g.addEdge(0,2,false);
	g.addEdge(0,3,false);
	g.addEdge(2,3,false);
	g.addEdge(1,3,false);
	g.addEdge(3,4,false);

	bool visited[5]={0};
	g.dfs(0,visited);
	cout<<endl;

	g.print();
}