#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5+10;

vector<int>prime;

int numberOfDivisors(int num) {
    int total = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            int e = 0;
            do {
                e++;
                num /= i;
            } while (num % i == 0);
            total *= e + 1;
        }
    }
    if (num > 1) {
        total *= 2;
    }
    return total;
}



// void primeFactors(int n)
// {
//     // Print the number of 2s that divide n
//     while (n % 2 == 0)
//     {
//         prime.push_back(2);
//         n = n/2;
//     }
 
//     // n must be odd at this point. So we can skip
//     // one element (Note i = i +2)
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         // While i divides n, print i and divide n
//         while (n % i == 0)
//         {
//             prime.push_back(i);
//             n = n/i;
//         }
//     }
 
//     // This condition is to handle the case when n
//     // is a prime number greater than 2
//     if (n > 2)
//         prime.push_back(n);
// }


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    //vector<int>prime = {2,3};
    
    int n;
    cin>>n;
    cout<<numberOfDivisors(n);
    // primeFactors(n);
    // int sq = sqrt(n);
    // int nod = 1;
  ////////////////////////////////////////////////////////
    // for(int i=0; i<prime.size() && prime[i] <= sq; i++)
    // {
    //     int p=0;
    //     while(n % prime[i] == 0)
    //     {
    //         p++;
    //         n/=prime[i];
    //     }
    //     nod *= (p+1);
    // }
  ///////////////////////////////////////////////////
    // for(int i=0; i<prime.size(); i++)
    // {
    //     if(prime[i]*prime[i]*prime[i] >= n)
    //     break;
    //     int p = 0;
    //     while(n % prime[i] == 0)
    //     {
    //         p++;
    //         n /= prime[i];
    //     }
    //     nod *= (p+1);
    // }
///////////////////////////////////////////////
    // if(n!=1) // n=prime hole
    // nod *= 2;
    // for(int i=0; i<prime.size(); i++)
    // {
    //     //cout<<prime[i]<<" ";
    //     if(i*i == n)
    //     {
    //         nod *= 3;
    //         break;
    //     }
    // }

    // cout<<nod;


    return 0;

}
