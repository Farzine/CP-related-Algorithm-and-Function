#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+10;

int parent[N];
int Size[N]; // size array of group

void make (int v){ // making v vertex
   parent[v] = v; //independent parent
   Size[v] = 1;
}

int find(int v){ // find the root node of vertex v
    if(v == parent[v]) // vertex jodi nijerai parent hy tahle oitai return korbe
        return v;
    //path compression
    return parent[v] = find(parent[v]);
}

void Union(int a, int b){ // add a vertex and b vertex group togather
    a = find(a); // find a's root
    b = find(b); // find b's root
    if(a != b) // jodi root same na hy
    {
        //Union by size
        if(Size[a] < Size[b]) // jar size coto take boro tar pise lagar jnna swap use kora hyse
            swap(a,b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,k; // n = nodes, k= edges
    cin>>n>>k;
    int u,v;
    for(int i=1; i<=n; ++i){
        make(i);
    }
    while(k--)
    {
        //int u,v;
        cin>>u>>v;
        Union(u,v);
    }
    //finding distinct connected component
    int connected_component = 0;
    for(int i=1; i<=n; i++)
    {
        if(find(i) == i)
            connected_component++;
    }
    cout<<connected_component<<endl;


    return 0;

}
