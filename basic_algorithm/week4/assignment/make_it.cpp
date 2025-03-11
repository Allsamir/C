#include <bits/stdc++.h>
using namespace std;

vector<int> dp;
bool canReach(int current, int target)
{
          if (current > target)
                    return false;
          if (current == target)
                    return true;
          if (dp[current] != -1)
                    return dp[current];

          return dp[current] = canReach(current * 2, target) || canReach(current + 3, target);
}

int main()
{
          int t, n;
          cin >> t;
          while (t--)
          {
                    cin >> n;
                    dp.assign(n + 1, -1); // Resize and initialize DP array
                    cout << (canReach(1, n) ? "YES" : "NO") << endl;
          }
          return 0;
}
