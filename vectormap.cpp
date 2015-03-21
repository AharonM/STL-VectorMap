#include "vectormap.h"

#include <iostream>
#include <vector>

using namespace std;


template <typename KeyType, typename DataType>
ostream &operator <<(ostream &os,const VectorMap<KeyType,DataType> &obj){
	os << "{";
	bool isFirst = true;
	for (typename vector<pair<KeyType,DataType> >::const_iterator iter = obj.vm.begin(); iter != obj.vm.end(); iter++)
		os << (isFirst ? isFirst = false, "" : ", ")  << iter->first << ":" << iter->second;
	os << "}";
	return os;
}



template <typename KeyType, typename DataType>
DataType &VectorMap<KeyType,DataType>::operator [](KeyType key){
	if(!find(key))
		vm.push_back(pair<KeyType, DataType> (key,DataType()));
	for (typename vector<pair<KeyType,DataType> >::iterator iter = vm.begin(); iter != vm.end(); iter++){
		if (iter->first == key){
		return iter->second;}
}
}

template <typename KeyType, typename DataType>
bool VectorMap<KeyType,DataType>::find(KeyType key) {
	for (typename vector<pair<KeyType,DataType> >::iterator iter = vm.begin(); iter != vm.end(); iter++)
		if (iter->first == key) return true;
	return false;
}


template <typename KeyType, typename DataType>
bool VectorMap<KeyType,DataType>::empty(){
	return (vm.empty());
}


template <typename KeyType, typename DataType>
int VectorMap<KeyType,DataType>::size(){
	return (vm.size());
	
}

template <typename KeyType, typename DataType>
void VectorMap<KeyType,DataType>::clear(){
	return (vm.clear());
}
