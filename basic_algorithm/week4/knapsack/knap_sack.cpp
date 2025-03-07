#include <bits/stdc++.h>
using namespace std;

vector<int> val;
vector<int> wt;
int knap_sack(int i, int mx_weight) // O(2^N)
{
          // 2 options
          // 1. We will add the weight
          // 2. We will not add the weight

          if(i < 0 || mx_weight <= 0)
          {
                    return 0; // we have nothing to add or we have used all the weight
          }

          if(wt[i] <= mx_weight)
          {
                    int opt1 = knap_sack(i - 1, mx_weight - wt[i]) + val[i];
                    int opt2 = knap_sack(i - 1, mx_weight);
                    return max(opt1, opt2);
          }
          else 
          {
                    // that's mean we can't take the weight because the weight is greater than the remaining mx_weight
                    return knap_sack(i - 1, mx_weight);
          }
}

int main(void)
{
          int n, mx_weight;
          cin >> n;
          

          for(int i = 0; i < n; i++)
          {
                    int value;
                    cin >> value;
                    val.push_back(value);
          }
          
          for(int i = 0; i < n; i++)
          {
                    int weight;
                    cin >> weight;
                    wt.push_back(weight);
          }

          cin >> mx_weight;

          cout << knap_sack(n - 1, mx_weight) << endl;
          
          return 0;
}