#include <iostream>
using namespace std;
struct node{
   int item;
   node *LC,*RC;
  };
node *Root = NULL;
node *putNode(int item)
{  node *t = new node;
  t->RC=t->LC = NULL;
   t->item =  item;
   return t;
}
node *  insert(node *root,int item)
{
  if(root==NULL)
  return(putNode(item));
  else {
           if(item < root->item)
           root->LC = insert(root->LC,item);
            else
            root->RC =insert(root->RC,item);
       return root;
     }
}
void inOrder(node *root)
{  if(root)
   { inOrder(root->LC);
     cout<<root->item<<" ";
     inOrder(root->RC);
    }
}
void preOrder(node *root)
{  if(root)
    { cout<<root->item<<" ";
      preOrder(root->LC);
      preOrder(root->RC);
    }
}
int main()
{
    Root = insert(Root,5);
    Root = insert(Root,2);
    Root = insert(Root,1);
    insert(Root,3);
     insert(Root,4);
   insert(Root,6);
     insert(Root,7);
//   preOrder(Root);
// */  cout<<endl;
   inOrder(Root);
  cout<<endl;
  return 0;
}
