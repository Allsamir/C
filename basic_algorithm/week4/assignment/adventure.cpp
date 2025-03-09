#include <bits/stdc++.h>
using namespace std;

int val[1005];
int wt[1005];
int dp[1005][1005];
int knap_sack(int i, int mx_weight)
{
          // 2 options
          // 1. We will add the weight
          // 2. We will not add the weight
          if (i < 0 || mx_weight <= 0)
                    return 0; // we have nothing to add or we have used all the weight

          if(dp[i][mx_weight] != -1)          
          {
                    return dp[i][mx_weight];
          }
          if (wt[i] <= mx_weight)
          {
                    int opt1 = knap_sack(i - 1, mx_weight - wt[i]) + val[i];
                    int opt2 = knap_sack(i - 1, mx_weight);
                    dp[i][mx_weight] = max(opt1, opt2);
                    return dp[i][mx_weight];
          }
          else
          {
                    dp[i][mx_weight] = knap_sack(i - 1, mx_weight);
                    return dp[i][mx_weight];
          }
}
int main(void)
{
          int t;
          cin >> t;

          while (t--)
          {
                    int n, mx_weight;
                    cin >> n >> mx_weight;
                    memset(dp, -1, sizeof(dp));

                    for (int i = 1; i <= n; i++)
                    {
                              int weight;
                                      cin >> weight;
                                      wt[i] = weight;
                    }

                    for (int i = 1; i <= n; i++)
                    {
                              int value;
                              cin >> value;
                              val[i] = value;
                    }

                    cout << knap_sack(n, mx_weight) << endl;
                    memset(dp, -1, sizeof (dp));
          }
          return 0;
}