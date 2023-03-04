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
