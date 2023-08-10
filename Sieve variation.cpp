// Find lowest prime and Highest prime

#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e7+10;
vector<bool> isPrime(N,1);
vector<int>lp(N,0),hp(N);


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    isPrime[0] = isPrime[1] = false;

    for(int i=2; i<N; i++)
    {
        if(isPrime[i] == true)
        {
            lp[i] = hp[i] = i; //because prime number highest and lowest prime is that number
            for(int j=2*i; j<N; j+=i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }
    /*
    for(int i=1; i<100; ++i)
    {
        cout<<lp[i]<<" "<<hp[i]<<endl;
    }
    */

    // Finding prime Factorization of a number
    /*
      int num;
      cin>>num;
      vector<int>prime_factors;

      while(num>1)
      {
          int prime_factor = hp[num];
          while(num % prime_factor == 0){
              num/= prime_factor;
              prime_factors.push_back(prime_factor);
          }
      }
      for(int factor : prime_factors)
      {
          cout<<factor<<" ";
      }
      */


    // Find count of Prime factorization of a number

    int num;
    cin>>num;
    map<int,int>prime_factors;

    while(num>1)
    {
        int prime_factor = hp[num];
        while(num % prime_factor == 0)
        {
            num/= prime_factor;
            prime_factors[prime_factor]++;
        }
    }
    for(auto factor : prime_factors)
    {
        cout<<factor.first<<" "<<factor.second<<endl;
    }

    return 0;
}
