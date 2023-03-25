// C++ program to check whether number
// has exactly three distinct factors
// or not
#include <bits/stdc++.h>
using namespace std;

// Utility function to check whether a
// number is prime or not
bool isPrime(int n)
{
	// Corner cases
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	// This is checked so that we can skip
	// middle five numbers in below loop
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

// Function to check whether given number
// has three distinct factors or not
bool isThreeDisctFactors(long long n)
{
	// Find square root of number
	int sq = (int)sqrt(n);

	// Check whether number is perfect
	// square or not
	if (1LL * sq * sq != n)
		return false;

	// If number is perfect square, check
	// whether square root is prime or
	// not
	return isPrime(sq) ? true : false;
}

// Driver program
int main()
{
	long long num = 9;
	if (isThreeDisctFactors(num))
		cout << "Yes\n";
	else
		cout << "No\n";

	num = 15;
	if (isThreeDisctFactors(num))
		cout << "Yes\n";
	else
		cout << "No\n";

	num = 12397923568441;
	if (isThreeDisctFactors(num))
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}
