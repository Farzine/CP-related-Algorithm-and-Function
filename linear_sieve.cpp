#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 10000000;
vector<int> lp(N+1);
vector<int> pr;

void linear_sieve()
{
    for (int i=2; i <= N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back(i);
    }
    for (int j = 0; i * pr[j] <= N; ++j) {
        lp[i * pr[j]] = pr[j];
        if (pr[j] == lp[i]) {
            break;
        }
    }
}
for(int i=0;i<pr.size();i++)
{
    cout<<pr[i]<<" ";
}
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    linear_sieve();



    return 0;
}
