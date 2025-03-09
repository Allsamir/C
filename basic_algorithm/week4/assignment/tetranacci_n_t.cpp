#include <bits/stdc++.h>
using namespace std;

vector<long long int> dp(35, -1);
int tetrannacci(int n)
{
          if (n == 0)
                    return 0;
          else if (n == 1 || n == 2)
                    return 1;
          else if (n == 3)
                    return 2;

          if (dp[n] != -1)
                    return dp[n];
          dp[n] = tetrannacci(n - 1) + tetrannacci(n - 2) + tetrannacci(n - 3) + tetrannacci(n - 4);
          return dp[n];
}
int main(void)
{
          int n;
          cin >> n;

          cout << tetrannacci(n) << endl;
          return 0;
}