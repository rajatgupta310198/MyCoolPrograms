#ifndef BINARY_TREE_H
#define BINARY_TREE_H 
#include <iostream>
using namespace std;
template <class T>
class Node{
    public:
       Node()
       {
       	LC=RC=NULL;
       }
       T data;
       Node<T>*LC,*RC;
};
template <class T>
class BinaryTree
{   
	  Node<T>*Root;
	 // Node<T>*putNode(T item);
public:
	BinaryTree();
	void insert(T item);
    void display();
    void inOrder(Node<T> *Root);
    bool hasChild(Node<T> *Current,int k);
   // void del(int item);
	//~BinaryTree();
	
};
#include "binaryTree.hpp"
#endif