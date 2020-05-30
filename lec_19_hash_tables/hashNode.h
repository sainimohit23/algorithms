#ifndef _HASHNODE_H_
# define _HASHNODE_H_

#include <cstring>

template <typename V>
class Hashnode{
public:
	V value;
	char * key;
	Hashnode<V> * next;
	Hashnode(const char* k,const V& val){
		key =new char[std::strlen(k)+1];
		strcpy(key,k);
		value = val;
		next = 0;
	}

	~Hashnode(){
		delete [] key;
	}
};

#endif