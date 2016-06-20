#include <iostream>

using namespace std;
struct  hashNode{
    int key;
    int item;
   hashNode *next;
};
const int max_table_size = 20;
class HashTable{
   hashNode **htable;
   int keys[max_table_size];
   int countk;
   int hsFunction(int key)
   {
     return key%max_table_size;
   }
 public:
   HashTable()
   {  countk = 0;
     htable = new hashNode*[max_table_size];
     for(int i=0;i<max_table_size;i++)
       this->htable[i] = NULL;
   }
   void insert(int data,int key)
   {
      int hashKey = hsFunction(key);
      this->keys[countk++] = key;
      hashNode *t = htable[hashKey];
      if(t==NULL)
      {
        t = new hashNode;
        t->item = data;
        t->key = key;
        t->next = NULL;
        htable[hashKey] = t;
      }
      else
      {
        hashNode *p = new hashNode;
        p->item = data;
        p->key = key;
        p->next = t;
        t=p;
        htable[hashKey] = t;
      }
   }
    void querr(int key)
    {  int hashKey = hsFunction(key);
      if(this->htable[hashKey]==NULL)
        cout<<"\nDoesn't exist";
        else{
             hashNode *t = htable[hashKey];
             while(t!=NULL)
             {
               cout<<t->item<<":"<<t->key<<" ";
               t=t->next;
             }
        }
      // function for querry
    }
    int keys_count()
    {
      return this->countk;
    }

};
int main()
{
  HashTable *T = new HashTable();
  T->insert(1,2);
  T->insert(2,3);
  T->insert(3,3);
  T->insert(4,4);
  T->insert(5,4);
  T->insert(5,2);
  T->insert(2,4);
  T->insert(1,4);
  T->insert(3,4);
  T->querr(4);
  //cout<<"\nNo. of keys :"<<T->keys_count()<<endl;

  return 0;
}
