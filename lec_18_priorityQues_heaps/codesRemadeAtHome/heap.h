#ifndef _HEAP_
#define _HEAP_

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Heap{

	vector<int> v;
	int size;

	int parent(int i) {return i >> 1;}
	int left(int i) {return i << 1;}
	int right(int i) {return (i << 1)+1;}

	void heapify(int i){
		int smallest=i;

		if(left(smallest) <= size && v[smallest] > v[left(smallest)]){
			swap(v[smallest],v[left(smallest)]);
			smallest=left(smallest);
		}
		if(right(smallest) <=size && v[smallest] > v[right(smallest)]){
			swap(v[smallest],v[right(smallest)]);
			smallest=right(smallest);
		}

		if( smallest != i){
			heapify(smallest);
		}
	}
public:
	Heap(){
		v.push_back(-1);
		size=0;
	}

	void push(int d){
		v.push_back(d);
		++size;

		int i=size;
		while(parent(i) >= 1 && v[parent(i)] > v[i]){
			swap(v[parent(i) ],v[i]);
			i=parent(i);
		} 
	}

	void pop(){
		swap(v[1],v[size]);
		if(size == 0) return ;
		v.pop_back();
		--size;

		heapify(1);
	}

	bool isempty(){
		return size == 0;
	}

	int smallest(){
		if(size == 0) return -1;
		return v[1];
	}
};

#endif