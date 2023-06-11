#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
        int x = 0;
    while (t--)2
    {
        string s;
        cin >> s;
        if (s == "++x" || s == "x++")
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    cout << x << endl;
    return 0;
}