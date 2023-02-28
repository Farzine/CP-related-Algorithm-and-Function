//memset(variable, value, variable size);
// C++ Program to demonstrate that we can use memset() to
// set all values as boolean data types also
#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool prime[5];
    memset(prime, true, sizeof(prime));
    // If you print without using boolalpha it will print
    // like this
    for (int i = 0; i < 5; i++)
        cout << prime[i] << " ";
    cout << "\n";
    // If you use boolalpha it will print like this
    for (int i = 0; i < 5; i++)
        cout << boolalpha << prime[i] << " ";

    return 0;
}

OUTPUT:
1 1 1 1 1 
true true true true true 

