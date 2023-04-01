#include<bits/stdc++.h>
using namespace std;

const int n = 1e7;
int a[n]; // you can declare a array globaley size up to 10^7 but you can not declare it in main
             // function, in main function you can declare a array up to 10^5

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str1,str2;
    cin>>str1<<str2;
    string sumOfString = str1 + str2; // we can add two string like this
    cout<<sumOfString<<endl;
    if(str1 == str2)// we can compare string like this
    {
        cout<<"Equal"<<endl;
    }

    // input system via getline(get whole line as a input)
    int n;
    cin>>n;
    cin.ignore(); // or getchar();
    while(n--)
    {
        string s;
        getline(cin,str);
    }


    return 0;
}


*******************************************
// C++ program to demonstrate the use
// of string::npos
#include <bits/stdc++.h>
using namespace std;

// Function that using string::npos
// to find the index of the occurrence
// of any string in the given string
void fun(string s1, string s2)
{
	// Find position of string s2
	int found = s1.find(s2);

	// Check if position is -1 or not
	if (found != string::npos) {

		cout << "first " << s2
			<< " found at: "
			<< (found) << endl;
	}

	else
		cout << s2 << " is not in"
			<< "the string" << endl;
}

// Driver Code
int main()
{
	// Given strings
	string s1 = "geeksforgeeks";
	string s2 = "for";
	string s3 = "no";

	// Function Call
	fun(s1, s2);

	return 0;
}
***************************************
