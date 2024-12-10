#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cin >> n;

          int sum = 0;

          // requires N times
          // for(int x = 1; x <= n; x++)
          // {
          //           sum += x;
          //           cout << sum << endl;
          // }

          // using formula requires 1 time.
          sum = (n * (n + 1)) / 2;

          cout << sum << endl;
          return 0;
}