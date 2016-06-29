#ifndef HASH_H
#define HASH_H

#include <iostream>
using namespace std;

template<class T>
class HashNode{
public:
      T key;
      T item;
      HashNode<T>* next;

};

template<class T>
class HashTable{
      HashNode<T>**htable;
      int max_table_size;
      T hashFunction(T key);
public:
       HashTable();
       void insert(T data,T key);
       void querr(T key);
     //  void print();
};

#include "hash.hpp"
#endif
