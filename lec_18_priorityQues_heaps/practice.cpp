#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

class heap{
	vector<unsigned long long int> v;
	unsigned long long int size;
	unsigned long long int parent(unsigned long long int i){ return i >> 1;}
	unsigned long long int left(unsigned long long int i){ return i << 1;}	//same as 2 * i
	unsigned long long int right(unsigned long long int i){ return (i << 1) + 1; }


	void heapify(unsigned long long int i){
			unsigned long long int smallest = i;
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

	unsigned long long int getMin(){
		if(size != 0) return v[1];
	}

	void push(unsigned long long int d){
		v.push_back(d);
		++size;
		// while parent exits and I am smaller than my parent
		// I will become parent....swap :)

		unsigned long long int i = size;
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

	unsigned long long int getMax(unsigned long long int d=1){
		if(d>size) return 0;
		unsigned long long int curMax=v[d];

		unsigned long long int Lmax=getMax(d<<1);
		unsigned long long int Rmax=getMax((d<<1) + 1);

		return max(max(curMax,Lmax),Rmax);
	}
};

int main(){
	unsigned long long int n; cin>>n;
	heap H;

	for(unsigned long long int i=0;i<n;++i){
		unsigned long long int k; cin>>k;
		H.push(k);
	}

	unsigned long long int q; cin>>q;
	for(unsigned long long int i=0;i<q;++i){
		unsigned long long int k;cin>>k;
		if(k==1){
			unsigned long long int x;
			cin>>x;
			H.push(x);
		}

		else{
			unsigned long long int maxNum =H.getMax();
			cout<<maxNum<<endl;
		}
	}
}