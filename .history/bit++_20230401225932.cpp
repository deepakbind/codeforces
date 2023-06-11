#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        int x = 0;
        if (ch == "++x" || ch == 'x++')
        {

            x++;
        }
        else
        {

            x--;
        }
        cout<<x<<endl;
    }
    return 0;
}