#include "hash.h"

using namespace std;

template<class T> HashTable<T>::HashTable()
{  max_table_size = 20;
  this->htable = new HashNode<T>*[max_table_size];
  for(int i = 0;i<max_table_size;++i)
    this->htable[i] = NULL;
}

template<class T> void HashTable<T>::insert(T data, T key)
{
    int hashKey = hashFunction(key);
    HashNode<T> *t = this->htable[hashKey];
    if(t==NULL)
    { t = new HashNode<T>;
      t->item = data;
      t->key = key;
      t->next = NULL;
      this->htable[hashKey] =t;
    }
    else
    {
      HashNode<T> *p = new HashNode<T>;
      p->item = data;
      p->key = key;
      p->next = t;
      t = p;
      this->htable[hashKey] = t;
    }
}

template<class T> void HashTable<T>::querr(T key)
{
  int hashKey = this->hashFunction(key);
  if(this->htable[hashKey]==NULL)
   cout<<"No items with provided key !";
   else
   {
       HashNode<T>*t = this->htable[hashKey];
       while(t)
       {
         cout<<t->item<<":"<<t->key<<" ";
         t=t->next;
        }
   }
}
template <class T> T HashTable<T>::hashFunction(T key)
{
  return key%this->max_table_size;
}
