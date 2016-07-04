#include "iostream"
#include "list"
using namespace std;
struct vertexNode{
    char label;
     list<char> adjlist;  //adjency list pointer
};
class Graph{
   int V;
   list<vertexNode*> vertex;
 public:
   Graph(int V)
   {
     this->V = V;
   }
   void addVertex(char l)
   {
      vertexNode *t = new vertexNode;
      t->label= l;
      this->vertex.push_back(t);
   }
   void addEdge(char src,char dest)
   {
      for(list<vertexNode*>::iterator v = vertex.begin();v!=vertex.end();++v)
      {
           vertexNode *p = *v;
           if(p->label == src)
           {
             p->adjlist.push_back(dest);
             break;
           }
      }
   }
   void printadjList(char src)
   {
     for(list<vertexNode*>::iterator v = vertex.begin();v!=vertex.end();++v)
     {
      vertexNode *p = *v;
      if(p->label==src)
      {
         for(list<char>::iterator it = p->adjlist.begin();it!=p->adjlist.end();++it)
         {
           cout<<*it<<" ";
         }
         cout<<endl;
         break;
      }
     }
   }
};
int main()
{
  Graph *g = new Graph(5);
  for(int i= 0;i<5;i++)
    g->addVertex(65+i);
  g->addEdge('A','C');
  g->addEdge('A','D');
  g->printadjList('A');
  return 0;
}
