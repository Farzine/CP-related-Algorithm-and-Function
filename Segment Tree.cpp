#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int a[N]; // input array
int tree[4*N]; // Tree array

void build(int node, int st, int en) // building tree ; st = start node of the array; en = end node of the array
{
    if( st == en) // leaf node
    {
        tree[node] = a[st];  // or  tree[node] == a[en]
        return;
    }

    int mid =  (en+st)/2;

    build(2*node, st, mid);
    build(2*node + 1, mid+1, en);
    tree[node] = tree[2*node] + tree[2*node+1]; // Updating the node, actually this line changes according to our need
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; // array size
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    build(1, 0, n-1); // build the tree

    // print the tree
    for(int i=1; i<15; i++)
    {
        cout<< tree[i]<<endl;
    }

    return 0;
}
