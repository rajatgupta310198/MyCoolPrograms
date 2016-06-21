#include <iostream>
#include "linkedlist.h"
using namespace std;
int main(){

   LinkedList<int>mylist;
   mylist.insert(1);
   mylist.insert(2);
   mylist.insert(3);
   mylist.insert(4);
   mylist.insert(5);
  // mylist.display();
   cout<<mylist;
  return 0;
}
