#include <iostream>
using namespace std;

int main()
{
	char binaryNumber[] = "1001";
	
	cout << stoi(binaryNumber, 0, 2); // stoi(string, position, base)

	return 0;
}

