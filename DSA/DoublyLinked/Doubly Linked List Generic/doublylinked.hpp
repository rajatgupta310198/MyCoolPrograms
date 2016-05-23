#include "doublylinked.h"
using namespace std;
template<class T> DoublyLinked<T>::DoublyLinked()
{
	head = NULL;
}
template<class T> void DoublyLinked<T>::insertB(T item)
{
	  node<T> *t= new node<T>;
	  t->prev =  NULL;
	  t->item = item;
	  t->next = head;
	 if(head==NULL)
	 	head = t;
	 else{
	 	    node<T> *temp = head;
	 	    temp->prev = t;
	 	    head = t;
	 }
}
template <class T> void DoublyLinked<T>::insertE(T item)
{
     node<T> *t= new node<T>;
	t->item = item;
	t->next = NULL;
	node<T> *p = head;
	while(p->next!=NULL)
		p=p->next;
	p->next = t;
	t->prev = p;
}
template <class T> void DoublyLinked<T>::insertAny(T item,T key)
{
	node<T>*t = new node<T>;
	t->item = item;
	node<T> *p = head;
	while(p->next!=NULL&&p->item!=key)
          p=p->next;
      if(p->next==NULL&&p->item==key)
      	 {
      	 	t->next =p->next;
      	 	p->next = t;
      	 	t->prev = p;
      	 }
      	 else if(p->item==key)
      	 {
      	 	t->next = p->next;
      	 	p->next->prev = t;
      	 	p->next = t;
      	 	t->prev = p;
      	 }
      	 else
      	 	cout<<"\nNo match found ";
}
template <class T> void DoublyLinked<T>::deleteB()
{
	if(head!=NULL)
	{
		node<T> *t =head;
    	if(t->next!=NULL)
    	  t->next->prev = NULL;
    	head = t->next;
    	delete t;
	}
	else
		cout<<"\nEmpty List !\n";
}
template <class T> void DoublyLinked<T>::deleteE()
{
	if(head!=NULL)
	 {
	 	node<T> *t = head;
	 	while(t->next!=NULL)
	 		t=t->next;
	 	if(t->prev!=NULL)
	 	t->prev->next =NULL;
	 	delete t;
	 }
}
template <class T> void DoublyLinked<T>::deleteAny(T key)
{
	node<T> *t = head;
	while(t->next!=NULL&&t->item!=key)
		t=t->next;
	if(t->next==NULL&&t->item==key)  // last element
	{
		deleteE();
	}
	if(t->prev==NULL&&t->item==key)// first element
	{
		deleteB();
	}
	else if(t->item==key)
	{
		t->prev->next=t->next;
		t->next->prev = t->prev;
		delete t;
	}
	else
		cout<<"\nNo match found";
}
template <class T> void DoublyLinked<T>::display()
{
	 node<T> *t = head;
	 while(t!=NULL)
	 {
	 	  cout<<"| "<<t->prev<<" | "<<t->item<<" | "<<t->next<<" |";
	 	  t=t->next;
	 }
	 cout<<"\n";
}
template <class T> int DoublyLinked<T>::count()
{
	int c = 0;
	 node<T> *t =head;
	 while(t)
       {
       	c++;
       	t=t->next;
       }
       return c;
}
/*template <class T> bool DoublyLinked<T>::search(T key)
{
	node<T> *t= head;
	while(t->next!=NULL)
	{
		if(t->item==key)
		{
			return true;
		}
		t=t->next;
	}
	return false;
}*/