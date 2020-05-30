#include <bits/stdc++.h>
using namespace std;

class unionFind{
public:
	int size;
	int *parent;
	int *sz;
	int numComponents;

	unionFind(int size){
		this->size = size;
		numComponents =  size;
		parent = new int[size];
		sz = new int[size];

		for(int i=0;i<size;++i){
            parent[i] = i;
            sz[i] = 1;
        }
	}

	int find(int p){
		if(parent[p] == p) return p;
		parent[p] = find(parent[p]);
		return parent[p];
	}

	bool connected(int p, int q){
        return find(p) == find(q);
    }

    int componentSize(int p){
        return sz[find(p)];
    }

    int getSize(){
        return size;
    }

    void unify(int p, int q){
    	int root1 = find(p);
    	int root2 = find(q);

    	if(root1 == root2) return;
    	if(sz[root1] < sz[root2]){
    		sz[root2] += sz[root1];
            parent[root1] = root2;
    	}
    	else{
            sz[root1] += sz[root2];
            parent[root2] = root1;
        }

        --numComponents;
    }
};



class Graph{
	int nV;
	vector<int> *adj;
public:
	Graph(int nV){
		this->nV = nV;
		adj = new vector<int>[nV];
	}

	void addEdge(int src, int dest){
		adj[src].push_back(dest);
		adj[dest].push_back(src);
	}

	void printGraph(){
		for(int i=0;i<nV;++i){
			cout<<i<<" : ";
			for(vector<int>::iterator it = adj[i].begin(); it != adj[i].end();++it){
				cout<<*it<<" ";
			}
			cout<<endl;
		}
	}

	void dfs(int origSrc,int src, bool visited[], unionFind &uf){
		visited[src] = true;
		// cout<<src<<" ";
		uf.unify(origSrc, src);
		for(auto it= adj[src].begin(); it != adj[src].end();++it){
			if(visited[*it]==false) dfs(origSrc, *it, visited, uf);
		}
	}
};



int main(){
	int n;
	cin>>n;

	Graph g(2*n+1);
	int x,y;
	for(int i=0;i<n;++i){
		cin>>x>>y;
		g.addEdge(x, y);
	}

	bool visited[2*n+1]={false};
	unionFind uf(2*n+1);

	for(int i=0;i<=2*n;++i){
		g.dfs(i , i, visited, uf);
	}

	int myMin=INT_MAX,myMax=INT_MIN;
	for(int i=0;i<=n*2;++i){
		int cur = uf.componentSize(i);
		if(cur > myMax && cur !=1) myMax=cur;
		if(cur < myMin && cur !=1) myMin=cur;
	}
	cout<<myMin<<" "<<myMax;
}