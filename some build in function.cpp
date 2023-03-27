
// GCD

/*Library: 'algorithm'
 __gcd(m, n) 
Parameter :  m, n
Return Value :  0 if both m and n are zero, 
else gcd of m and n.*/

#include <iostream>
#include <algorithm>
// #include<numeric> for C++17
using namespace std;
int main()
{
	cout << "gcd(6, 20) = " << __gcd(6, 20) << endl; // gcd(6,20) for C++17
}


//Find max element in an array
// C++ program to find the max
// of Array using *max_element() in STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Get the vector
	vector<int> a = { 1, 45, 54, 71, 76, 12 };

	// Print the vector
	cout << "Vector: ";
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;

	// Find the max element
	cout << "\nMax Element = "
		<< *max_element(a.begin(), a.end());
	return 0;
}
