#include<bits/stdc++.h>
using namespace std;

const int N = 510;
const int INF = 1e9+10;

int dist[N][N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0; i<N; ++i)
    {
        for(int j=0; j<N; ++j)
        {
            if( i == j)
                dist[i][j] = 0;
            else dist[i][j] = INF; // initializing i to j node distance as infinity that means path doesn't exist
        }
    }

    // taking directed weighted graph input

    int n, m;
    cin>>n>>m; // n = vertex ; m = edge ;
    for(int i =0; i<m; i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        dist[x][y] = wt; // initializing i to j node distance according to graph weight
    }

    // Floyd Warshall Algorithm
    for(int k=1; k<=n; ++k) // allowing vertexes to go from i to j
    {
        for(int i=1; i<=n; ++i)
        {
            for(int j=1; j<=n; ++j)
            {
                if(dist[i][k] != INF && dist[k][j] != INF) // If the graph has negative weight then you should use the condition
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    // print shortest path
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(dist[i][j] == INF) // if distance i to j is infinity print i
            {
                cout<<"I ";
            }
            else cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// this algorithm can handle negative weighted edges
// this algorithm can't handle negative weighted edges cycle
