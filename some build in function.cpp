
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


//__builtin_popcount()  is a built-in function of GCC compiler. This function is used to count the number of set bits in an unsigned integer. 
// ai function decimal number k binary te convert kore then oi number a koi ta 1 ase seta return kore
// C++ code to demonstrate the
// __builtin_popcount function
#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n = 4;

	// Printing the number of set bits in n
	cout << __builtin_popcount(n); // output 1

	return 0;
}


//inline Functions in C++

//C++ provides inline functions to reduce the function call overhead. An inline function is a function that is expanded in line when it is called. 
//When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call. 
//This substitution is performed by the C++ compiler at compile time. An inline function may increase efficiency if it is small.

Syntax:

#include <iostream>
using namespace std;
inline int cube(int s) { return s * s * s; }
int main()
{
    cout << "The cube of 3 is: " << cube(3) << "\n";
    return 0;
}  
//The compiler may not perform inlining in such circumstances as: 

//If a function contains a loop. (for, while and do-while) 
//If a function contains static variables. 
//If a function is recursive. 
//If a function return type is other than void, and the return statement doesn’t exist in a function body. 
//If a function contains a switch or goto statement. 


///////////////// 
/*
A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin). To use stringstream, we need to include sstream header file. The stringstream class is extremely useful in parsing input. 

Basic methods are:

clear()- To clear the stream.
str()- To get and set string object whose content is present in the stream. 
operator <<- Add a string to the stringstream object. 
operator >>- Read something from the stringstream object.
*/

#include <iostream>
#include <sstream>
#include<string>
using namespace std;

int countWords(string str)
{
	// Breaking input into word
	// using string stream

	// Used for breaking words
	stringstream s(str);

	// To store individual words
	string word;

	int count = 0;
	while (s >> word)
		count++;
	return count;
}

int main()
{
	string s = "geeks for geeks geeks "
			"contribution placements";
	cout << " Number of words are: " << countWords(s);
	return 0;
}

// C++ program to demonstrate use
// of stringstream to count
// frequencies of words.
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

void printFrequency(string st)
{
	// Each word it mapped to
	// it's frequency
	map<string, int>FW;

	// Used for breaking words
	stringstream ss(st);

	// To store individual words
	string Word;

	while (ss >> Word)
		FW[Word]++;

	map<string, int>::iterator m;
	for (m = FW.begin(); m != FW.end(); m++)
		cout << m->first << "-> "
			<< m->second << "\n";
}

int main()
{
	string s = "Geeks For Geeks Ide";
	printFrequency(s);
	return 0;
}

///////////////
In C programming language, the "scanf" function is used to read input from the user. The code you provided, "while (scanf ("%d", &t) ==1)", 
is a loop that continues to read input from the user as long as the input is a valid integer. The loop will execute the code inside the curly 
brackets for each valid integer entered by the user. The loop will terminate when the user enters an invalid input or when the program encounters an error. 
In summary, the code you provided is used to repeatedly read integers from the user until an invalid input is entered or an error occurs.
////////////////
	
std::count() returns the number of occurrences of an element in a given range. Returns the number of elements in the range [first, last) that compare equal to val.

int main()
{
	int arr[] = { 3, 2, 1, 3, 3, 5, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout <<

		" Number of times 3 appears : "
	<< count(arr, arr + n, 3);

	return 0;
}
															 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vect{ 3, 2, 1, 3, 3, 5, 3 };
	cout << "Number of times 3 appears : "
		<< count(vect.begin(), vect.end(), 3);

	return 0;
}
															 

///////////////////////////////////////////////
															   
															    
// C Program to demonstrate use
// of left shift operator--->( a* 2^n )
#include <stdio.h>

// Driver code
int main()
{
// a = 5(00000101), b = 9(00001001)
unsigned char a = 4, b = 9;

// The result is 00001010
printf("a<<1 = %d\n", (a << 1));

// The result is 00010010
printf("b<<1 = %d", (b << 1));
return 0;
}
///////////////////////////////////////////
															   
