#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n, q;

          cin >> n >> q;

          vector<long long int> arr(n + 1);
          vector<long long int> prefix_sum(n + 1);
          int flag = 1;
          for (int x = 1; x <= n; x++)
          {
                    cin >> arr[x];
                    if (flag)
                    {
                              prefix_sum[x] = arr[x];
                    }
                    if (!flag)
                    {
                              prefix_sum[x] = prefix_sum[x - 1] + arr[x];
                    }
                    flag = 0;
          }

          while (q--)
          {
                    int a, b;
                    cin >> a >> b;

                    long long int sum;

                    if (a == 1)
                    {
                              sum = prefix_sum[b];
                    }
                    else
                    {
                              sum = prefix_sum[b] - prefix_sum[a - 1];
                    }

                    cout << sum << endl;
          }
          return 0;
}