#include <iostream>
using namespace std;
class MaxHeap{
  int heap_size,N,*heaparr;
  void max_heapify(int i);// restores heap property
  int parent(int i); // returns parent of i
  int left(int i);  // returns left child of i
  int right(int i); // return right child of i
  void heap_increase_key(int i,int key); // lift up the i the element and increase key at i th pos
public:
  MaxHeap(int N_) // creates empty heap
  {
     N = N_;
     heap_size = 0;
     heaparr = new int[N];
  }

  void build_max_heap(); // build heap
  void heapsort(); // performs heapsort
  int extract_max(); // return max of heap and remove it
  int maxmimun(); // return max of heap
  void insert(int key); // insert key to heap
  void print(); // print my heap
};
void MaxHeap::build_max_heap()
{
   for(int i=heap_size/2;i>0;i--)
      max_heapify(i);
}
void MaxHeap::max_heapify(int i)
{
  int l = left(i);
  int r = right(i);
  int largest_index;
  if(l<heap_size && heaparr[l]>heaparr[i])
  {
    largest_index = l;
  }
  else{
    largest_index = i;
  }
  if(r<heap_size && heaparr[largest_index]<heaparr[r])
  {
    largest_index = r;
  }
  if(largest_index!=i) // heap property violation occured so fixe it
  {
    int temp = heaparr[largest_index];
    heaparr[largest_index] = heaparr[i];
    heaparr[i] = temp;
    max_heapify(largest_index);
  }
}
int MaxHeap::parent(int i)
{
  return (i/2);
}
int MaxHeap::left(int i)
{
  return 2*i;
}
int MaxHeap::right(int i)
{
  return 2*i+1;
}
void MaxHeap::insert(int key)
{
  if(heap_size==N)
  {
    cout<<"\nHeap is full extract from heap in order to add new key\n";
  }
  else{
    heap_size++;
    heaparr[heap_size-1] = key;
    build_max_heap();
  }
}
void MaxHeap::print()
{
  if(heap_size!=0)
  {
    for(int i=0;i<heap_size;i++)
      cout<<heaparr[i]<<" ";
  }
  else
   cout<<"Empty heap\n";
}
int main()
{ MaxHeap h(5);
  h.insert(1);
  h.insert(2);
  h.insert(5);
  h.insert(3);
  h.print();
  return 0;
}
