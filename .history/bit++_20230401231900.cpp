#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
        int x = 0;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[1] == "++x" || s == "x++")
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