#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
    int item;
    node *next;
};
node *head = NULL;
void insert(int item)   // insert at beg
{
	node *t = new node;
	t->item = item;
    if(head==NULL)
    {
    	t->next = t;
    	head =t;
    }
    else
    {
    	node *temp = head;
    	while(temp->next!=head)
    		 temp=temp->next;
    	t->next = head;
    	head = t;
    	temp->next = head;
    }
}
void insertAtEnd(int item)   // insert at end of list
{
	node *t= new node;
	t->item = item;
	node *p = head;
	while(p->next!=head)
       p=p->next;
    p->next = t;
    t->next = head;
}
void insertAfter(int key,int n)
{
	if(head->next==head)
		cout<<"\nList empty !";
	else
	{   node *q = new node;
		node *t =head;
		node *p;
		q->item = n;
		while(t->item!=key&&t->next!=head)
		{ 
            p=t;
            t=t->next;
		}
		if(t->next==head)
			cout<<"\nNo match found \n";
		else{
			p->next = q;
		q->next = t->next;
		}
		
	}
}
void deleteE()
{
	if(head->next==head)
	{
		cout<<"\nList is empty";
	}
	else
	{   // if(head->next==head)
		 //  head = NULL;
		 node * p = head;
		 node *t = head;
		 while(p->next!=head)
              p=p->next;
          head=head->next;
          p->next=head;
		   
		 delete t;
   }
}
void deleteB()
{
	node *t;
	node *p =head;
	while(p->next!=head)
	{
		t=p;
		p=p->next;
	}
	t->next = head;
	delete p;
}
void deletebykey(int key)
{
	if(head->next==head)
		cout<<"\nList is empty !";
	else
	{
		node *t= head;
		node *p;
		while(t->item!=key&&t->next!=head)
		{
			p=t;
			t=t->next;
		}
		if(t->next==head)
			cout<<"\nNo match found !";
		else
		{
			p->next = t->next;
			delete t;
		}
	}
}
void search(int key)
{
	node *t=head;
	int c=0;
	while(t->item!=key&&t->next!=head->next)
		{
			t=t->next;
			c++;
		}
	if(t->next==head)
		cout<<"\nNo match found !\n";
	else
	{
		cout<<"\nElement found at "<<++c;
	}
}
void display()
{
	node *t = head;
	while(t->next!=head)
	{
		cout<<t->item<<" ";
		t=t->next;
	}
	cout<<t->item<<endl;
}
int main()
{
    int ch;
    while(1)
    {
    	cout<<"\nPress 1 to insert\nPress 2 to insert At end\nPress 3 to insert insert After\nPress 4 to display";
    	cout<<"\nPress 5 to delete beg\nPress 6 to delete from end\nPress 7 to delete by key\nPress 8 to search\nPress 9 to exit ";
    	cin>>ch;
    	if(ch==1)
    	{
    		cout<<"\nEnter Item :";
    		int item;
    		cin>>item;
    		insert(item);
    	}
    	if(ch==2)
    	{
    		cout<<"\nEnter Item :";
    		int item;
    		cin>>item;
    		insertAtEnd(item);
    	}
    	if(ch==3)
        {
    		cout<<"\nEnter Item :";
    		int item,key;
    		cin>>item;
    		cout<<"\nEnter item to whom after "<<item<<" is to be inserted";
    		cin>>key;
    		insertAfter(key,item);
    	   }
    	if(ch==4)
    		display();
    	if(ch==5)
    		deleteB();
    	if(ch==6)
    		deleteE();
    	if (ch==7)
    	{  int key;
           cout<<"\nEnter Item to delete :";
           cin>>key;
           deletebykey(key);
    		/* code */
    	}
    	if(ch==8)
    	{  int key;
           cout<<"\nEnter Item to search :";
           cin>>key;
           search(key);
    	}
    	if(ch==9)
    		exit(0);
    }
    return 0;
}