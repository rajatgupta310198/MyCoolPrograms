#ifndef DOUBLY_LINKED_H
#define DOUBLY_LINKED_H
#include <iostream>
template<class T>
class node{
    public:
     T item;
     node<T> *next,*prev;
};
template<class T>
class DoublyLinked
{
public:
    node<T> *head;
    DoublyLinked();
    void insertB(T item);
    void insertE(T item);
    void insertAny(T item,T key);
    void deleteB();
    void deleteE();
    void deleteAny(T key);
    void display();
    int count();
    friend ostream &operator<<(ostream &out,const LinkedList<T> &L)
    {
       
      	node<T>*t = L.head;
      	while(t)
      	{
      		out<<t->item<<" ";
      		t=t->next;
      	}

    }

};
#include "doublylinked.hpp"
#endif
