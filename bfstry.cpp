#include<iostream>
#include<stdlib.h>
using namespace std;
int visited[10],queue[10],graph[10][10];
int n,v;
int f=0,r=-1;

void bfs(int v)
{
   cout<<"visited element is ="<<v<<"\n";
   visited[v]=1;
   for(int i=1;i<=n;i++)
   {
      if(graph[v][i] && !visited[i])
      {
         
         //cout<<i<<" this element is added in queue"<<endl;
         r++;
         //cout<<"rear pointer value is = "<<r<<endl;;
         queue[r]=i;
         visited[i]=1;
      }
   }
   if(f<=r)
   {
      //cout<<"queue element is = "<<queue[f]<<endl;
      bfs(queue[f++]);
   }
}
int main()
{
  cout<<"enter the number of vertices"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
     visited[i]=0;
     queue[i]=0;  
     for(int j=1;j<=n;j++)
     {
        cin>>graph[i][j];
     }
  }
  cout<<"enter the starting vertex"<<endl;
  cin>>v;
  cout<<" output "<<endl;
  bfs(v);
 cout<<endl;
 /*
0 1 1 0 0 0
1 0 0 1 1 0
1 0 0 0 1 0
0 1 0 0 1 1
0 1 1 1 0 1
0 0 0 1 1 0

0 1 0 0 0 0 0 0 1
1 0 0 0 0 0 0 0 0 
0 0 0 1 1 1 0 0 1
0 0 1 0 0 0 0 0 0 
0 0 1 0 0 0 0 1 0
0 0 1 0 0 0 1 0 0
0 0 0 0 0 1 0 1 1
0 0 0 0 1 0 1 0 0 
1 0 1 0 0 0 1 0 0

*/
}
