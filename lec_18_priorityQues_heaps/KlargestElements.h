#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

class heap{
	vector<int> v;
	int size;
	int parent(int i){ return i >> 1;}
	int left(int i){ return i << 1;}	//same as 2 * i
	int right(int i){ return (i << 1) + 1; }


	void heapify(int i){
			int smallest = i;
			if(left(i) <= size && v[left(i)] < v[smallest]){
				smallest = left(i);
			}
			if(right(i) <= size && v[right(i)] < v[smallest]){
				smallest = right(i);
			}
			if (smallest != i){
				swap(v[smallest], v[i]);
				heapify(smallest);
			}
	}

public:
	heap(){
		v.push_back(-1);
		size = 0;
	}

	int getMin(){
		if(size != 0) return v[1];
	}

	void push(int d){
		v.push_back(d);
		++size;
		// while parent exits and I am smaller than my parent
		// I will become parent....swap :)

		int i = size;
		while(parent(i) >= 1 && v[parent(i)] > v[i]){
			swap(v[parent(i)], v[i]);
			i = parent(i);
		}
	}

	void pop(){
		if(size == 0) return ;
		swap(v[1], v[size]);
		v.pop_back();
		--size;
		heapify(1);
	}

	bool isEmpty(){
		return size == 0;
	}

	int getMax(int d=1){
		if(d>size) return 0;
		int curMax=v[d];
		int curIndex=d;
		int index = 0;
		int Lmax=getMax(d<<1);
		int Lindex = d<<1;
		int Rmax=getMax((d<<1) + 1);
		int Rindex = (d<<1) + 1 ;

		int k = max(max(curMax,Lmax),Rmax);

		if(k == v[d]) return d;
		if(k == v[d<<1]) return d<<1;
		if(k == v[(d<<1) + 1]) return (d<<1) + 1;
	}
};

int main(){
	int n,k;
	cin>>n>>k;

	heap H;
	for(int i=0;i<n;++i){
		int d; cin>>d;
		H.push_back(d)
	}

	for(int i=0;i<k;++i){
		int index = H.getMax();
		cout<<H.v[index]<<" ";
		h.pop()
	}
}