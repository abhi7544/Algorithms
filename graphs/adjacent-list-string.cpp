#include<bits/stdc++.h>
 using namespace std;

 template<typename T>
 class Graph
 {
   map<T,list<T>> adjlist;
   public:
       void addEdge(T u,T v,bool bidir=true)
       {
           adjlist[u].push_back(v);
           if(bidir)
            adjlist[v].push_back(u);
       }

       void printGraph()
       {
       for(auto row:adjlist)
       {
         cout<<row.first<<"->";
         for(T ele :row.second)
            cout<<ele<<",";
            cout<<endl;

       }
       }


 };

int main()
{
Graph<string> g;
g.addEdge("Delhi","Mumbai",false);
g.addEdge("Delhi","Kolkata",false);
g.addEdge("Mumbai","Kolkata");
g.addEdge("Banglore","Kolkata",false);
g.addEdge("Banglore","Mumbai",false);
g.addEdge("Banglore","Delhi",false);
g.printGraph();

return 0;}
