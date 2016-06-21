#include "iostream"
using namespace std;
struct node {
    int item;
    node *next;
};
node *head = NULL;
void swp(node *a,node *b)
{
  int t = a->item;
  a->item = b->item;
  b->item = t;
}
int countNode = 0;
void insert(int item)
{
  node *t = new node;
  t->item =item;
  t->next = head;
  head = t;
  countNode++;
}
void display()
{
  node *t = head;
  while(t)
  {
    cout<<t->item<<" ";
    t=t->next;
  }
}
void sortl(node *h)
{  //node *iptr = NULL;

    for(node* i = h;i->next!=NULL;i=i->next)
    { node *y;
      for(node *j = i->next;j->next!=NULL;)
      {
        if(i->item>j->item)
         swp(i,j);
         j=j->next;
         y = j;
      }
      if(i->item>y->item)
       swp(i,y);
    }

}

int main() {
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);
  display();
  cout<<"\n Sorting.. \n";
/*  node **p = &head;
  node *i = head->next;
  p->next = &i->next;
  cout<<head->next<<" "<<p->->next;*/
 sortl(head);
 display();
  return 0;
}
