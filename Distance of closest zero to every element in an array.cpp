#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ct=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
            break;
        else ct++;
    }

    vector<int> left(n), right(n);
    int pos = ct;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            pos = i;
        }
        left[i] = pos;
    }
    pos = -1;
    for (int i = n-1; i >= 0; i--) {
        if (a[i] == 0) {
            pos = i;
        }
        right[i] = pos;
    }


    for (int i = 0; i < n; i++) {
        int dist = min(abs(i-left[i]), abs(right[i]-i));
        cout << dist << " ";
    }

    return 0;
}




// CPP program to find closest 0 for every element
#include <bits/stdc++.h>
using namespace std;

// Print the distance with zeroes of every element
void print_distance(int arr[], int n)
{
	// initializes an array of size n with 0
	int ans[n];
	memset(arr, 0, sizeof(arr[0]));

	// if first element is 0 then the distance
	// will be 0
	if (arr[0] == 0)
		ans[0] = 0;
	else
		ans[0] = INT_MAX; // if not 0 then initialize
						// with a maximum value

	// traverse in loop from 1 to n and store
	// the distance from left
	for (int i = 1; i < n; ++i) {

		// add 1 to the distance from previous one
		ans[i] = ans[i - 1] + 1;

		// if the present element is 0 then distance
		// will be 0
		if (arr[i] == 0)
			ans[i] = 0;	
	}

	// if last element is zero then it will be 0 else
	// let the answer be what was found when traveled
	// from left to right
	if (arr[n - 1] == 0)
		ans[n - 1] = 0;

	// traverse from right to left and store the minimum
	// of distance if found from right to left or left
	// to right
	for (int i = n - 2; i >= 0; --i) {

		// store the minimum of distance from left to
		// right or right to left
		ans[i] = min(ans[i], ans[i + 1] + 1);

		// if it is 0 then minimum will always be 0
		if (arr[i] == 0)
			ans[i] = 0;
	}

	// print the answer array
	for (int i = 0; i < n; ++i)
		cout << ans[i] << " ";
}

// driver program to test the above function
int main()
{
	int a[] = { 2, 1, 0, 3, 0, 0, 3, 2, 4 };
	int n = sizeof(a) / sizeof(a[0]);
	print_distance(a, n);
	return 0;
}


