#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cin >> n;

          vector<long long int> arr(n);
          vector<long long int> prefix_arr(n);

          for (int x = 0; x < n; x++)
          {
                    cin >> arr[x];
          }

          // prefix sum
          prefix_arr[0] = arr[0];

          for(int x = 1; x < n; x++)
          {
                    prefix_arr[x] = prefix_arr[x - 1] + arr[x];
          }

          reverse(prefix_arr.begin(), prefix_arr.end());

          for(int x = 0; x < n; x++)
          {
                    cout << prefix_arr[x] << " ";
          }

          cout << endl;
          
          return 0;
}