#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5+10;

vector<int>divisors[N];


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    for(int i=2; i<N; i++)
    {
        for(int j=i; j<N; j+=i)
        {
            divisors[j].push_back(i);
        }
    }

    for(int i=1; i<10; i++)
    {
        for(int div : divisors[i])
        {
            cout<<div<<" ";
        }
        cout<<endl;
    }


    return 0;

}
