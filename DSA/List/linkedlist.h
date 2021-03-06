#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;
template <class T>
class node{
    public:
     T item;
     node<T> *next;
};
template <class T>
class LinkedList
{
public:
    node<T> *head;
    int count;
    LinkedList();
    void insert(T n);
    void insertEnd(T n);
    void insertAfter(T n,T key);
    void deleteB();
    void deleteEnd();
    void deleteAny(T key);
    void display();
    int size();
    friend ostream &operator<<(ostream &out,const LinkedList<T> &L)
    {
       
      	node<T>*t = L.head;
      	while(t)
      	{
      		out<<t->item<<" ";
      		t=t->next;
      	}

    }
	~LinkedList();

};

#include "linkedlist.hpp"
#endif
