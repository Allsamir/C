#include <bits/stdc++.h>
using namespace std;

vector<int> val;
vector<int> wt;
vector<vector<int>> dp(1005, vector<int>(1005, -1));
int knap_sack(int i, int mx_weight)
{
          // 2 options
          // 1. We will add the weight
          // 2. We will not add the weight
          if(i < 0 || mx_weight <= 0)
                    return 0; // we have nothing to add or we have used all the weight

          if(dp[i][mx_weight] != -1)   
          {
                    return dp[i][mx_weight];
          }

          if(wt[i] <= mx_weight)
          {
                    int op1 = knap_sack(i - 1, mx_weight - wt[i]) + val[i];
                    int op2 = knap_sack(i - 1, mx_weight);
                    dp[i][mx_weight] = max(op1, op2);
                    return dp[i][mx_weight];
          }   
          else 
          {
                    // that's mean we can't take the weight because the weight is greater than the remaining mx_weight
                    dp[i][mx_weight] = knap_sack(i - 1, mx_weight);
                    return dp[i][mx_weight];
          }
}
int main(void)
{
          int n;
          int mx_weight;
          cin >> n >> mx_weight;

          for(int x = 0; x < n; x++)
          {
                    int value, weight;
                    cin >> weight >> value;
                    wt.push_back(weight);
                    val.push_back(value);
          }


          // for(auto i : dp)
          // {
          //           for(auto j : i)
          //           {
          //                 cout << j << " ";
          //           }
          //           cout << endl;
          // }
          cout << knap_sack(n - 1, mx_weight) << endl;


          return 0;
}