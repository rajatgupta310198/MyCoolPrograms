#include "binaryTree.h"

template <class T> BinaryTree<T>::BinaryTree()
{
	Root = NULL;
}
template <class T> void BinaryTree<T>::insert(T item)
{     Node<T> *t = new Node<T>;
      t->data = item;
      t->LC=t->RC= NULL;
	  if(Root==NULL)
	  {
	  	Root =t; 
	  }
	  else {   bool suc= false;
	  	       Node<T>* temp = Root;
	  	       while(temp!=NULL&&suc==false)
	  	       { cout<<"\nCurrent Node : "<<temp->data;
	  	       	 if(temp->LC==NULL||temp->RC==NULL)
	  	       	{
	  	       		  cout<<"\nMake it's left or right child [L/R] :";
	  	       		  char ch;
	  	       		  cin>>ch;
	  	       		  if(ch=='L')
	  	       		  {
	  	       		  	if(hasChild(temp,1))
	  	       		  		temp =temp->LC;
	  	       		  	 else
	  	       		  	 	{temp->LC = t;
							suc= true;
							} 
	  	       		  }
	  	       		  if(ch=='R')
	  	       		  {  
	  	       		  	 if(hasChild(temp,2))
	  	       		  		temp =temp->RC;
	  	       		  	 else
	  	       		  	 {
	  	       		  	 		temp->RC = t;
	  	       		  	 	    suc= true;
	  	       		  	 }

	  	       		  }
	  	       		 // ask for right child or left
	  	       	}
	  	       	else
	  	       	{  // this case consider if there are two childern
	  	       		cout<<"\nCurrent Node has childrens LC "<<temp->LC->data<<" and RC "<<temp->RC->data;
	  	       		cout<<"\nWhich Side You want to go [L/R] :";
	  	       		char ch;
	  	       		cin>>ch;
	  	       		if(ch=='L')
	  	       		temp=temp->LC;
	  	       		if(ch=='R')
	  	       		temp=temp->RC;
	  	       	}
	  	       }
	  }	  
}
template <class T>bool BinaryTree<T>::hasChild(Node<T> *Current,int k){
	 if(k==1)
	 	{
	 		if(Current->LC!=NULL)
	 		return true;
	     	else
	 		return false;
	 	}
	 	if (k==2)
	 	{
	 		if(Current->RC!=NULL)
	 		return true;
	     	else
	 		return false;
	 	}
}
template <class T> void BinaryTree<T>::inOrder(Node<T>* Root){
	if(Root)
	{
		inOrder(Root->LC);
		cout<<Root->data<<" ";
		inOrder(Root->RC);
	}
}
template <class T> void BinaryTree<T>::display(){
	if(Root==NULL)
		cout<<"\nTree is empty !";
	else
		inOrder(Root);
}
 
