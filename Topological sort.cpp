#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m;
   cin>>n>>m; // n= number of vertexes ; m = number of edges
   int cnt =0;
   vector<vector<int>> adj_list(n); // initializing adjacency matrix
   vector<int>indeg(n,0); // in-degree vector of vertex
   for(int i=0; i<m; i++) // taking adjacency matrix
   {
       int u,v;
       cin>>u>>v;
       // u --> v;
       adj_list[u].push_back(v);
       indeg[v]++;
   }
   queue<int> pq;
   for(int i = 0; i<n; i++)
   {
       if(indeg[i]==0)
       {
           pq.push(i);
       }
   }
   while(!pq.empty())
   {
       cnt++;
       int x = pq.front();
       pq.pop();
       cout<<x<<" ";
       // x --> v;
       for(auto it : adj_list[x])
       {
           indeg[it]--;
           if(indeg[it] == 0)
            pq.push(it);
       }

   }

  // if the graph has cycle than the topological sort can't be perform, then x vertex can't print out
  // you can detect cycle in a graph by topological sort


   return 0;
}
