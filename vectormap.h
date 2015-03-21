#ifndef VECTORMAP_H
#define VECTORMAP_H

#include <vector>
#include <iostream>

using namespace std;


template <typename KeyType, typename DataType>
class VectorMap;

template <typename KeyType, typename DataType>
ostream &operator <<(ostream &os,const VectorMap<KeyType,DataType> &obj);

template <typename KeyType, typename DataType>
class VectorMap {
	friend ostream &operator << <>(ostream &os, const VectorMap<KeyType,DataType> &obj);
public:
	DataType &operator [](KeyType key);
	bool find(KeyType key);
	bool empty();
	int size();
	void clear();
private:
   	vector<pair<KeyType, DataType> > vm;
    	
    	
template <typename T1,typename T2>
struct Pair {
	friend ostream &operator << (ostream &os, const Pair<T1, T2> pair){
	os << '{'<< pair.first << ',' << pair.second << '}' << endl;
	return os;
	}
	Pair(const T1 &first, const T2 &second) {
	this->first = first;
	this->second = second;
	}
	T1 first;
	T2 second;
};
};

#endif
