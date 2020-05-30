#ifndef _HASHMAP_H
#define _HASHMAP_H
#include "hashnode.h"

template <typename T>
class Hashmap{
	Hashnode<V>* *arr;
	int size;
	int nElements;

	Hashnode<V>* findEle(const char* k){
		int index = hashFunction(K) % size;

	}
	int hashFunction(const char * k);

public:
	Hashmap(){
		arr = new Hashnode<V>*[10];
		size = 10;

		for(int i=0;i<size;++i){
			arr[i]=0;
		}
		nElements = 0;
	}

	void insert(const char* k,const V& val){
		Hashnode<V>* cur= new Hashnode<V>(k,vaal);
		int index = hashFunction(k) % size;

		if(arr[index]==0){
			arr[index] = cur;
			return;
		}

		cur->next = arr[index];
		arr[index] = cur;

	}

	V find(const char * k){
		int index = hashFunction(k) % size;


		Hashnode<V>* tmp=arr[index];
		while(tmp!=0){
			const char * tmpkey = tmp->key;
			if(strcmp(tmpkey,k)==0) return tmp->value;
			tmp=tmp->next;
		}
	}

	bool delete(const char * k){

 // do at home.	
	}


}

#endif