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
	void insert(T n);
    void insertEnd(T n);
	void insertAfter(T n,T key);
    void deleteB();
    void deleteEnd();
    void deleteAny(T key);
    void display();
    int count();
    bool search();
	//~DoublyLinked();
	
};
#include "doublylinked.hpp"
#endif