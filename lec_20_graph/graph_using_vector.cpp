#include <iostream>
#include <list>
#include <utility>
#include <queue>
#include <typeinfo>
using namespace std;

void addEdge(vector<long long int> graph[], long long int a, long long int b){
	graph[a].push_back(b);
	graph[b].push_back(a);
}

void long long printer(vector<long long int> adj[], long long int nV){

	for(long long int i=0;i<nV;++i){
		cout<<i<<" : ";

		for(auto it= adj[i].begin();it != adj[i].end();++it){
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}

long long int main(){

	vector<long long int> graph[5];

	addEdge(graph, 1, 2);
	addEdge(graph, 2, 4);
	addEdge(graph, 2, 3);
	addEdge(graph, 4, 2);
	addEdge(graph, 1, 0);
	addEdge(graph, 0, 2);
	prlong long inter(graph, 5);

	cout<<typeid(graph).name();
}