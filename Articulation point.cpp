
#include <bits/stdc++.h>
using namespace std;
#define int long long


void dfs(vector<int> adj[], int n, vector<int>& vis,
         int i, int curr)
{
    vis[curr] = 1;
    for (auto x : adj[curr])
    {
        if (x != i)
        {
            if (!vis[x])
            {
                dfs(adj, n, vis, i, x);
            }
        }
    }
}


int AP(vector<int> adj[], int n)
{
    int ct=0;


    for (int i = 1; i <= n; i++)
    {

        int components = 0;

        vector<int> vis(n + 1, 0);


        for (int j = 1; j <= n; j++)
        {
            if (j != i)
            {

                if (!vis[j])
                {


                    components++;


                    dfs(adj, n, vis, i, j);
                }
            }
        }

        if (components > 1)
        {
            //cout << i << "\n";
            ct++;
        }
    }
    return ct;
}


void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}


signed main()
{

    while(1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0)
            break;
        else
        {
            vector<int> adj1[n + 1];
            for(int i=0; i<m; i++)
            {
                int u,v;
                cin>>u>>v;
                addEdge(adj1,u,v);
            }
            int ct =AP(adj1, n);
            cout<<ct<<endl;
        }

    }

    return 0;
}

