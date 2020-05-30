#ifndef _HASHMAP_H
#define _HASHMAP_H
#include "hashnode.h"
#include <cstring>
using namespace std;

template <typename V>
class Hashmap{
	//dynamic array of Hashnode<V> *
	Hashnode<V>* *arr;
	int size;
	int nElements;

	Hashnode<V>* findEle(const char* k){
		int index = hashFunction(k) % size;
		Hashnode<V> * tmp = arr[index];
		while(tmp != 0){
			if (strcmp(tmp->key, k) == 0) return tmp;
			tmp = tmp->next;
		}
		return 0;	//NULL
	}

	void deleteLL(Hashnode<V> * head){
		while(head == 0){
			Hashnode<V>* nextNode = head->next;
			delete head;
			head = nextNode;
		}
	}

	int hashFunction(const char* k){
		int ans = 0;
		int L = strlen(k);
		int power = 1;
		for(int i = 0; k[i] != '\0'; ++i){
			ans += k[L - i - 1] * power;
			ans %= size;
			power *= 37;
			power %= size;
		}
		return ans;
	}

	void rehash(){
		size *= 2;	//2 * size
		Hashnode<V>* *oldMap = arr;
		arr = new Hashnode<V>*[2 * size];

		for(int i = 0; i < size / 2; ++i){
			Hashnode<V>* cur = oldMap[i];
			while(cur != 0){
				insert(cur->key, cur->value);
				Hashnode<V> * tmp = cur;
				cur = cur->next;
				delete tmp;
			}
		}
		delete [] oldMap;
	}

public:
	Hashmap(){
		arr = new Hashnode<V>*[10];
		size = 10;
		for(int i = 0; i < 10; ++i){
			arr[i] = 0;
		}
		nElements = 0;
	}

	void insert(const char * k, const V& val){
		Hashnode<V>* cur = new Hashnode<V>(k, val);
		++nElements;

		int index = hashFunction(k) % size;

		if (arr[index] == 0){
			//set node
			arr[index] = cur;
			return;
		}

		cur->next = arr[index];
		arr[index] = cur;

		double loadFactor = nElements / (double) size;
		if (loadFactor > 0.7) rehash();
	}

	V find(const char* k){
		int index = hashFunction(k) % size;
		
		Hashnode<V>* tmp = arr[index];
		while(tmp != 0){
			const char* tmpKey = tmp->key;
			if (strcmp(tmpKey, k) == 0){
				return tmp->value;
			}
			tmp = tmp->next;
		}

		V obj;
		return obj;
	}

	void remove(const char* k){
		Hashnode<V>* toDelete = findEle(k);
		if (toDelete != 0){
			--nElements;
			//to complete hw
		} 
	}

	~Hashmap(){
		for(int i = 0; i < size; ++i){
			deleteLL(arr[i]);
		}
		delete [] arr;
	}

	bool empty(){
		return size == 0;
	}

	bool mapSize(){
		return nElements;
	}

};
#endif