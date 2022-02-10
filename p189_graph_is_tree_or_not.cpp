#include<bits/stdc++.h>
#define Node 5
using namespace std;
int graph[Node][Node]={{0,1,1,1,0},
                       {1,0,1,0,0},
                       {1,1,0,0,0},
                       {1,0,0,0,1},
                       {0,0,0,1,0}};
bool iscycle(int u,bool visited[],int parent){
visited[u]=true;              // u is visited so marked true
for(int v=0;v<Node;v++){      // for all traversing all adjacent nodes to u
  if(graph[u][v])             // for every edge from u to v which exists it will true
  {
    if(!visited[v])           // any v adjacent to u if not visited
    {
      if(iscycle(v,visited,u))   // check if there is a cycle from v to u if its true then cycle is there
      return true;
    }
  }
 else if(v!=parent)         // if v adjacent to u is visisted and not parent of u then cycle is there
  return true;
}
return false;           // if we come out of for loop i.e no cycle found . Hence return false
}
bool isTree(){
 bool *vis=new bool[Node];
for(int v=0;v<Node;v++)
 vis[v]=false;                 // intialize as false since no node is visited till now
if(iscycle(0,vis,-1))        // if iscycle is true i.e there is a cycle hence its not tree , so return false
 return false;
for(int v=0;v<Node;v++){    // is there is node not visited by traversal , hence graph not connected
 if(!vis[v])
  return false;}
return true;
}
int main(){
if(isTree())
cout<<"Graph is a tree";
else
cout<<"Graph is not a tree";
return 0;
}