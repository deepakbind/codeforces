#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (upper > lower)
    {
        for (int i = 0; i < s.length(); i++)
        {//for checking lower case
            if (s[i] >= 97)
            {
                s[i] = s[i] - 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {//for checking upper case
            if (s[i] < 97)
            {
                s[i] = s[i] 32;
            }
        }
    }
    return 0;
}