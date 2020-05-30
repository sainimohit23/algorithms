#include <iostream>
#include <list>
#include <utility>
#include <queue>
#include <typeinfo>
using namespace std;


int t = 0;
void addEdge(vector<int> graph[],int a, int b){
	graph[a].push_back(b);
}

void printer(vector<int> adj[],  int nV){

	for(int i=0;i<nV;++i){
		cout<<i<<" : ";

		for(vector<int>::iterator it= adj[i].begin();it != adj[i].end();++it){
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}

void DFS_with_time(vector<int> graph[], bool visited[], int src, int time[]){
	visited[src] = true;
	for(auto it = graph[src].begin(); it!= graph[src].end();++it){
		if(visited[*it] == false){
			DFS_with_time(graph, visited, *it, time);
		}
	}

	time[src] = t;
	t++;
}

void DFS(vector<int> graph[], bool visited[], int src){
	visited[src] = true;
	cout<<src<<" ";
	for(auto it = graph[src].begin(); it!= graph[src].end();++it){
		if(visited[*it] == false){
			DFS(graph, visited, *it);
		}
	}
}



int main(){

	vector<int> g[5]; 
    addEdge(g,1, 0); 
    addEdge(g,0, 2); 
    addEdge(g,2, 1); 
    addEdge(g,0, 3); 
    addEdge(g,3, 4); 

    printer(g, 5);
	vector<int> GraphRev[5];
	for(int i=0;i<5;++i){
		for(auto it = g[i].begin();it != g[i].end();++it){
			addEdge(GraphRev, *it, i);
		}
	}
	cout<<endl;
	printer(GraphRev, 5);

	bool visited[5] = {false};
	int time[5];
	for(int i=4;i>=0;--i){
		if(visited[i] ==false){
			DFS_with_time(GraphRev, visited, i, time);
		}
	}


	for(int i=0;i<5;++i){
		cout<<time[i]<<" ";
	}

	cout<<endl<<endl;
	
	vector<int> finalG[5];
	for(int i=0;i<5;++i){
		for(auto it = g[i].begin();it != g[i].end();++it){
			addEdge(finalG, time[i], time[*it]);
		}
	}

	printer(finalG, 5);
	for(int i=0;i<5;++i){
		visited[i] = false;
	}
	for(int i=4;i>=0;--i){
		if(visited[i] == false){
			DFS(finalG, visited, i);
			cout<<endl;
		}
	}
}