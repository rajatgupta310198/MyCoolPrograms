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
    int hsFunction(int key)
    {
      return key%max_table_size;
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

};
int main()
{
  hashTable *T = new HashTable();
  T->insert(1,2);
  T->insert(2,3);
  T->insert(3,3);
  T->insert(4,4);
  T->insert(5,4);
  T->insert(5,2);
  T->querr(8);
  
  return 0;
}
