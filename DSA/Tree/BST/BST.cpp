#include "iostream"
using namespace std;
struct node{
	int item;
	node *LC,*RC;
};
node *Root  = NULL;
node *create(int item)
{
	node *t = new node;
	t->item = item;
	t->LC = t->RC = NULL;
	return t;
}
void insert(int item)
{
	if(Root==NULL)
		Root = create(item);
	else
	{
		node *temp = Root;
		 while(temp)
		 {
		 	if(temp->LC==NULL&&item<temp->item)
			temp->LC = create(item);
		    if(temp->RC==NULL&&item>temp->item)
			  temp->RC = create(item);
			else
			{
				 if(item<temp->item)
		    	   temp=temp->LC;
		    	   else
		    	    temp=temp->RC;
			}
		 }
	}
}
void inOrder(node *Root)
{
	if(Root)
	{
		inOrder(Root->LC);
		cout<<Root->item<<" ";
		inOrder(Root->RC);
	 
	}
}
void del_BST(int item)
{
	node *t = Root;
	if(t->item == item)
	
}
int main()
{
	insert(5);
	insert(8);
	insert(7);
	inOrder(ROOT);
	cout<<"\n"<<computeHeight(ROOT);
	return 0;
}
