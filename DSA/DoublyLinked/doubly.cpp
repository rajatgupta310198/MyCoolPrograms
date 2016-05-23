#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
	int item;
	node *next,*prev;
};
node *head = NULL;
void insertB(int item)
{    node *t = new node;
	  t->prev =  NULL;
	  t->item = item;
	  t->next = head;
	 if(head==NULL)
	 	head = t;
	 else{
	 	    node *temp = head;
	 	    temp->prev = t;
	 	    head = t;
	 }
	// at beg
}
void insertE(int item)
{
	node *t = new node;
	t->item = item;
	t->next = NULL;
	node *p = head;
	while(p->next!=NULL)
		p=p->next;
	p->next = t;
	t->prev = p;
	// at end
}
void insertAny(int key,int item)
{
	node *t = new node;
	t->item = item;
	node *p = head;
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
	//at any position
}
void deleteB()
{
	if(head!=NULL)
	{
		node *t =head;
    	if(t->next!=NULL)
    	  t->next->prev = NULL;
    	head = t->next;
    	delete t;
	}
	else
		cout<<"\nEmpty List !\n";
	//delete from beg
}
void deleteE()
{   
	 if(head!=NULL)
	 {
	 	node *t = head;
	 	while(t->next!=NULL)
	 		t=t->next;
	 	if(t->prev!=NULL)
	 	t->prev->next =NULL;
	 	delete t;
	 }
	// delete from end
}
void deleteAny(int key)
{   
	node *t = head;
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
	// delete given item from list
}
void display()
{   
	 node *t = head;
	 while(t!=NULL)
	 {
	 	  cout<<"| "<<t->prev<<" | "<<t->item<<" | "<<t->next<<" |";
	 	  t=t->next;
	 }
	 cout<<"\n";
	// display list
}
int count()
{   int c = 0;
	 node *t =head;
	 while(t)
       {
       	c++;
       	t=t->next;
       }
       return c;
	// count no of elements in list
}
bool search(int key)
{
	node *t= head;
	while(t->next!=NULL)
	{
		if(t->item==key)
		{
			return true;
		}
		t=t->next;
	}
	return false;
	// search form an item in list
}
int main()
{
	int ch;
	while(1)
	{
		cout<<"Press 1 to insert at begining of list\nPress 2 to insert at end of list\nPress 3 to insert at after mentioned item of list";
		cout<<"\nPress 4 to display list\nPress 5 to delete from beg\nPress 6 to delete from end\nPress 7 to delete mentioned item";
		cout<<"\nPress 8 to search\nPress 9 count no of elements in list\nPress 10 to exit";
		cout<<"\nYour Choice :";
		cin>>ch;
		if(ch==1)
		{
			int item;
			cout<<"\nEnter Item :";
			cin>>item;
			insertB(item);
		}
		if(ch==2)
		{
			int item;
			cout<<"\nEnter Item :";
			cin>>item;
			insertE(item);
		}
		if(ch==3)
		{
			int item,key;
			cout<<"\nEnter item and key :";
			cin>>item>>key;
			insertAny(key,item);
		}
		if(ch==4)
			display();
		if(ch==5)
			deleteB();
		if(ch==6)
			deleteE();
		if(ch==7)
		{
			int key;
			cout<<"\nEnter Item to delete :";
			cin>>key;
			deleteAny(key);
		}
		if(ch==8)
		{
			int key;
			cout<<"\nEnte item to search :";
			cin>>key;
			if(search(key))
				cout<<"\nFound\n";
			else
				cout<<"\nNot found";
		}
		if(ch==9)
			cout<<count()<<endl;
		if(ch==10)
			exit(0);
		 
	}
	return 0;
}