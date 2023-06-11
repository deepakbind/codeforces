#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = 0;
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