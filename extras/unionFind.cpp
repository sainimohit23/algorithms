#include <bits/stdc++.h>
using namespace std;


class UnionFind{
    int size;
    int * parent;
    int * sz;
    int numComponents;

public:

    UnionFind(int size){
        while(size<=0){
            cout<<"Please enter a positive number"<<endl;
            cin>>size;
        }

        this->size = size;
        numComponents = size;
        parent = new int[size];
        sz = new int[size];

        for(int i=0;i<size;++i){
            parent[i] = i;
            sz[i] = 1;
        }
    }

    int find(int p){
        int root = p;
        while(root != parent[root]) root = parent[root];
        while(p != root){
            int next = parent[p];
            parent[p] = root;
            p = next;
        }
        return root;
    }

    // Alternative
    // int find(int p){
    //     if(p == parent[p]) return p;
    //     parent[p] = find(parent[p]);
    //     return parent[p];
    // }

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
        if(sz[root1]<sz[root2]){
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

int main(){
    UnionFind uf(10);
    cout<<uf.componentSize(3)<<endl;
    uf.unify(3, 5);
    cout<<uf.componentSize(3)<<endl;
    cout<<uf.connected(3, 5)<<endl;
    uf.unify(5, 6);
    cout<<uf.componentSize(3)<<endl;
    uf.unify(5, 9);
    cout<<uf.find(9);
}