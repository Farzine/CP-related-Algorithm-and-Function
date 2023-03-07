#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 1e9+10;

vector<pair<int,int>>g[N]; // pair<node, weight>  initializing the adjacent matrix
vector<int> vis(N,0); // initialize visited vector by 0
vector<int> dist(N,INF); // initialize distant vector by infinity


void dijkstra(int source)
{
    set<pair<int,int>>st; // pair<weight,node   here we can use multiset or priority queue instead of set
    st.insert({0,source}); // taking the source in the set with weight 0
    dist[source]=0;
    while(st.size()>0) //untill the set is not empty
    {
        auto node = *st.begin(); // taking the minimum weighted node by using set
        int v = node.second;
        int v_dist = node.first;
        st.erase(st.begin()); // erase the minimum weighted node from the set after visited it
        if(vis[v]) //checking if the node is visited than leave the node
        continue;
        vis[v] = 1; // initialize the visited vector for the minimum weighted node in the set by true
        for(auto child : g[v])
        {
            int child_v = child.first; // child node
            int wt = child.second; // child node weight
            if(dist[v] + wt < dist[child_v]) // //new distance of child node = dist[v] + wt......current distance of child node = dist[child_v]
            {
                dist[child_v] =  dist[v] + wt;
                st.insert({dist[child_v], child_v}); // insert the new minimum weight of the child in the set
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; // n = node, m = edge
    for(int i=0; i<m; i++)
    {
        int x,y,wt; // wt = weight of the edge
        cin>>x>>y>>wt;
        g[x].push_back({y,wt}); // just this line for directed graph
        g[y].push_back({x,wt}); // this two line for undirected graph
    }

    dijkstra(1);

    return 0;
}
