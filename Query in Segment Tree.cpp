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

int query(int node, int st, int en, int l, int r) // l to r query
{
    if(st > r || en < l) // l....r..st...en || st...en...l....r
    {
        return 0;
    }
    if( l <= st && en <= r) // l...st...en...r
    {
        return tree[node];
    }
    // st...l...en...r || l...st...r...en

    int mid = (st+en)/2;
    int left = query(2*node, st, mid, l, r);
    int right = query(2*node+1, mid+1, en, l, r);
    return left+right; // sum of the left and right query
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

    while(1) // output the query
    {
        int type;
        cin>> type;
        if(type == -1) break;
        else
        {
            int l,r;
            cin>>l>>r;
            int ans = query(1, 0, n-1, l, r);
            cout<<ans<<endl;
        }
    }

    return 0;
}
