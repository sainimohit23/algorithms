#include <queue>
#include <vector>
#include <iostream>
#include <functional>
using namespace std;

// **  NOT COMPLETE  **

class heap{
    vector<int> v;
    int size;
    int parent(int n) {return n>>1;}
    int left(int n) {return n<<1;}
    int right(int n) {return (n<<1) +1;}

    void heapify(int top){
        int smallest = top;

        if(v[left(top)] < v[smallest] && left(top) <=size){
            smallest = left(top);
        }
        if(v[right(top)] < v[smallest] && right(top) <=size){
            smallest = right(top);
        }
        if(smallest != top){
            swap(v[smallest], v[top]);
            heapify(smallest);
        }
    }


public:

    heap(){
        v.push_back(-1);
        size = 0;
    }

    void push(int n){
        v.push_back(n);
        ++size;

        int i=size;
        while(v[parent(i)] > n && parent(i) >= 1){
            swap(v[i], v[parent(i)]);
            i = parent(i);
        }
    }

    int getIndex(int n){
        for(int i=1;i<=size;++i){
            if(v[i] == n) return i;
        }
    }

    void remove(int n){
        if(size == 0) return ;
        int idx = getIndex(n);
        swap(v[idx], v[size]);
        v.pop_back();
        --size;

        int i = idx;
        while(v[parent(i)] > n && parent(i) >= 1){
            swap(v[i], v[parent(i)]);
            i = parent(i);
        }

        heapify(idx);

    }

    int root(){
        return v[1];
    }

};

int main(){
    heap h;
    int q;
    cin>>q;

    for(int i=0;i<q;++i){
        int c;
        cin>>c;

        switch(c){
            case 1:
                int n;
                cin>>n;
                h.push(n);
                break;

            case 2:
                int k;
                cin>>k;
                h.remove(k);
                break;
            case 3:
                cout<<h.root()<<endl;
        }
    }
}
