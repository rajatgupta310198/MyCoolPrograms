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
	LinkedList();                     
	void insert(T n);
    void insertEnd(T n);
	void insertAfter(T n,T key);
    void deleteB();
    void deleteEnd();
    void deleteAny(T key);
    void display();
	~LinkedList();
	
};

#include "linkedlist.hpp"
#endif