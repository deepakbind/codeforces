#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  int cnt = 0;
  while (n)
  {
    if (n % 10 == 4 || n % 10 == 7)
    {
      cnt++;
    }
    n = n / 10;
    if (n % 10 == 4 || n % 10 == 7)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;7
  }

  return 0;
}