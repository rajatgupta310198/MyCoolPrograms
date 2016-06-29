#include "hash.h"

using namespace std;
int main()
{
   HashTable<int>mytable;
   mytable.insert(1,2);
   mytable.insert(2,3);
   mytable.insert(3,3);
   mytable.insert(4,4);
   mytable.insert(5,4);
   mytable.insert(5,2);
   mytable.insert(2,4);
   mytable.insert(1,4);
   mytable.insert(3,4);
   mytable.querr(4);
  // mytable.print();
   return 0;
}
