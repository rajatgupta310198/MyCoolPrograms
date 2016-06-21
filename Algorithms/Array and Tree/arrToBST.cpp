#include "iostream"
#include "algorithm"
using namespace std;
struct node{
  int item;
  node *lc;
  node *rc;
};
node *Root = NULL;
node *insert(int item)
{
  node *t = new node;
  t->item = item;
  t->lc=t->rc= NULL;
}
node * convertToBST(node *root,int arr[],int s,int e)
{
   if(s>e)
    return root;
    else
    {
      int mid = (s+e)/2;
      if(root==NULL)
        root = insert(arr[mid]);
      root->lc = convertToBST(root->lc,arr,s,mid-1);
      root->rc = convertToBST(root->rc,arr,mid+1,e);
      //return root;
    }
return root;
}
void inOrder(node *root)
{
  if(root)
  {
    inOrder(root->lc);
    cout<<root->item<<" ";
    inOrder(root->rc);
  }
}
int main()
{
  int arr[]={5,6,13,55,2,1,64,17};
  int len = sizeof(arr)/sizeof(int);
  sort(arr,arr+len);
  for(int i=0;i<len;i++)
  cout<<arr[i]<<" ";
  cout<<endl;
  Root = convertToBST(Root,arr,0,len-1);
  inOrder(Root);
  cout<<endl;
  return 0;
}
