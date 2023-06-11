#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        if (x % 10 == 0)
        {
            x = x / 10;
        }
        else
        {
            x--;
        }
    }
    cout << x;

    return 0;
}