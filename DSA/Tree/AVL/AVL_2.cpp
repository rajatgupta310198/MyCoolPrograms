#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
   int item;
   node *LC,*RC;
   int height;
//  node *parent;
};
node *Root = NULL;
int h(node *n){
	if(n)
		return n->height;
	else
		return 0;
}
node *create(int item){
	node *t = new node;
	t->item = item;
	t->LC = t->RC = NULL;
	t->height = 0;  //change to 
//	t->parent = parent;
	return t;
}
int getMax(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
node *ll(node *root){
	node *t = root->RC;
	root->RC = t->LC;
	t->LC = root;
	root->height = getMax(h(root->LC),h(root->RC))+1;
	t->height = getMax(h(t->LC),h(t->RC))+1;
	return t;
}
node *rr(node *root){
	node *t = root->LC;
	root->LC = t->RC;
	t->RC = root;
	root->height = getMax(h(root->LC),h(root->RC))+1;
	t->height = getMax(h(t->LC),h(t->RC))+1;
	return t;
}
node *insert(node *root,int item)
{
	if(root==NULL)
		return(create(item));
	else if(item<root->item)
		root->LC = insert(root->LC,item);
	else if(item>root->item)
		root->RC = insert(root->RC,item);
    
    root->height = getMax(h(root->LC),h(root->RC)) + 1;
    int bf = h(root->LC) - h(root->RC);
    if(bf>=1)  //left heavy
    {
    	bf = h(root->LC->LC) - h(root->LC->RC);
    	if(bf>0)  // subtree right heavy
    	{
    		root->LC = ll(root->LC);
    		return rr(root);
    	}
    	else
    		return(rr(root));
    }
    if(bf<=-1)  //right heavy
    {  bf = h(root->RC->LC) - h(root->RC->RC);
    	if(bf<-1)    //subtree left heavy
    	{
    		root->RC = rr(root->LC);
    		return ll(root);
    	}
    	else
    		return(ll(root));

    }
    return root;
}
void inOrder(node *Root)
{
	if(Root)
	{
		inOrder(Root->LC);
		cout<<Root->item<<" ";
		inOrder(Root->RC);
	// 1800224484
	}
}
int main(){
	 Root = insert(Root,5);
	 Root = insert(Root,7);
	 Root = insert(Root,6);
	/* Root = insert(Root,3);
	 Root = insert(Root,6);
	 Root = insert(Root,7);
	 Root = insert(Root,8);
	  Root = insert(Root,10);
	   Root = insert(Root,4);
	    Root = insert(Root,0);
	 Root = insert(Root,-1);
	  Root = insert(Root,-2);//*/
	 cout<<Root->item<<" has height "<<h(Root)<<endl;
	 inOrder(Root);
	 return 0;
}