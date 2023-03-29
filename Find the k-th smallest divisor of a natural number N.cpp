// C++ program to find the K-th smallest factor

#include <bits/stdc++.h>
using namespace std;

// Function to find the k'th divisor
void findkth ( int n, int k)
{
	// initialize vectors v1 and v2
	vector <int> v1;
	vector <int> v2;
	
	// store all the divisors in the two vectors
	// accordingly
	for( int i = 1 ; i <= sqrt( n ); i++ )
	{
		if ( n % i == 0 )
		{
			v1.push_back ( i );
			
			if ( i != sqrt ( n ) )
				v2.push_back ( n / i );
		}
	}
	
	// reverse the vector v2 to sort it
	// in increasing order
	reverse(v2.begin(), v2.end());
	
	// if k is greater than the size of vectors
	// then no divisor can be possible
	if ( k > (v1.size() + v2.size()))
		cout << "Doesn't Exist" ;
	// else print the ( k - 1 )th value of vector
	else
	{
		// If K is lying in first vector
		if(k <= v1.size())
			cout<<v1[k-1];
		// If K is lying in second vector
		else
			cout<<v2[k-v1.size()-1];
	}
}

// Driver code
int main()
{
	int n = 15, k = 2;
	
	findkth ( n, k) ;

	return 0;
}
