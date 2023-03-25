// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
#define int long long

// Function to find the required triplets
void findTriplets(int x)
{
	// To store the factors
	vector<int> fact;
	unordered_set<int> factors;

	// Find factors in sqrt(x) time
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			fact.push_back(i);
			if (x / i != i)
				fact.push_back(x / i);
			factors.insert(i);
			factors.insert(x / i);
		}
	}

	bool found = false;
	int k = fact.size();
	for (int i = 0; i < k; i++) {

		// Choose a factor
		int a = fact[i];
		for (int j = 0; j < k; j++) {

			// Choose another factor
			int b = fact[j];

			// These conditions need to be
			// met for a valid triplet
			if ((a != b) && (x % (a * b) == 0)
				&& (x / (a * b) != a)
				&& (x / (a * b) != b)
				&& (x / (a * b) != 1)) {

				// Print the valid triplet
				cout<<"YES"<<endl;
				cout << a << " " << b << " "<< (x / (a * b))<<endl;
				found = true;
				break;
			}
		}

		// Triplet found
		if (found)
			break;
	}

	// Triplet not found
	if (!found)
		cout << "NO"<<endl;
}

// Driver code
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x ;
        cin>>x;

        findTriplets(x);
    }


	return 0;
}
