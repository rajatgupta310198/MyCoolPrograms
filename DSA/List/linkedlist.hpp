#include <iostream>
#include "linkedlist.h"

using namespace std;
template <class T>  LinkedList<T>::LinkedList()
{
	head = NULL;
}
template <class T> void LinkedList<T>::insert(T n)
{
     node<T> *t = new node<T>;
     if(t==NULL)
     {
     	cout<<"\nError in creating Node";
     }
     else
     {
     	t->next = head;
     	t->item = n;
     	head = t;
     }
}
template <class T> void LinkedList<T>::display()
{
      if(head==NULL)
      {
        cout<<"\nList is empty !\n";
      }
      else
      {
        node<T> *t = head;
        while(t!=NULL)
        {
          cout<<t->item<<" ";
          t= t->next;
        }
      }
      cout<<endl;
}
template <class T> void LinkedList<T>::insertEnd(T n)
{
	if(head==NULL)
    {
        cout<<"\nList is empty !\n";
    }
    else
    {
        node<T> *t = new node<T>;
        node<T> *p = head;
        t->item = n;
        t->next = NULL;
        while(p->next!=NULL)
        p=p->next;
        p->next = t;
    }
}
template <class T> void LinkedList<T>::insertAfter(T n,T key)
{   
    if(head==NULL)
    {
        cout<<"\nList is empty !\n";
    }
    else
    {
        node<T> *t = new node<T>;
    node<T> *p = head;
     
    t->item = n;
    while(p->item!=key&&p->next!=NULL)
        p=p->next;
    if(p->next==NULL)
        cout<<"\nNo elements matched with "<<key;
    else
    {
        t->next = p->next;
        p->next = t;
    }
    }
}
template <class T> void LinkedList<T>::deleteB()
{
     if(head==NULL)
     { 
        cout<<"\nList is empty !\n";
     }
     else
     {
        node<T> *t = head;
        head = t->next;
        delete t;
     }
}
template <class T> void LinkedList<T>::deleteEnd()
{
    if(head==NULL)
    {
        cout<<"\nList is empty !\n";
    }
    else
    {
        node<T> *t = head;
        node<T> *p;
        while(t->next!=NULL)
         {
             p=t;
             t=t->next;
         }
         p->next = t->next;
         delete t;
    } 
}
template <class T> void LinkedList<T>::deleteAny(T key)
{
    if(head==NULL)
    {
        cout<<"\nList is empty !\n";
    }
    else
    {
        node<T> *t = head;
        node<T> *p;
        while(t!=NULL)
        {
            if(head->item==key)
            {
                head = head->next;
                delete t;
                break;
            }
            else if(t->item==key)
            {
                p->next= t->next;
                delete t;
                break;
            }
            p=t;
            t=t->next;
        }
        if(t->next==NULL)
            cout<<"\nNo items matched with "<<key<<" in list \n";

    }
}
template <class T> LinkedList<T>::~LinkedList()
{
    node<T> *t = head;
    
    while(t!=NULL)
    {
        head = head->next;
        delete t;
        t=head->next;
    }
}