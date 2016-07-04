#include "iostream"
#include "list"
using namespace std;
struct vertexNode{
    char label;
     list<char> adjlist;  //adjency list  
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

           }
           if(p->label==dest)
           {
             p->adjlist.push_back(src);

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
  g->addEdge('B','D');
  g->addEdge('D','C');
  g->addEdge('A','B');
  /*
    Construct a Graph --
    B---D----C
    \  \   |
     \  \ |
      \--A

    */
  cout<<"Adj list A :";
  g->printadjList('A');
  cout<<"\nAdj list B :";
  g->printadjList('B');
  cout<<"\nAdj list C :";
    g->printadjList('C');
    cout<<"\nAdj list D :";
      g->printadjList('D');

      cout<<endl;
  return 0;
}
