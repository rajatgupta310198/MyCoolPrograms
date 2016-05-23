#include "doublylinked.h"
using namespace std;
int main()
{
	DoublyLinked<int>mylist;
	mylist.insertB(1);
	mylist.insertB(2);
	mylist.insertB(3);
	mylist.insertB(4);
	mylist.insertB(5);
	mylist.display();
	mylist.deleteB();
	mylist.display();
	mylist.deleteE();
	mylist.display();
	mylist.insertE(1);
	mylist.display();
	mylist.insertAny(55,3);
	mylist.display();
	mylist.deleteAny(55);
	mylist.display();
	mylist.count();
	return 0;
}