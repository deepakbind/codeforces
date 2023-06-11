#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
    cin>>s;
        int x=0;
        if(s=="++x"||s=="x++"){
        ++x;
        }
        else{
        --2x;
        }
        cout<<x<<endl;
    }
        return 0;
}