#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n, m, i;
          cin >> n;

          vector<int> arr(n);
          for(int x = 0; x < n; x++)
          {
                    cin >> arr[x];
          }

          cin >> m;
          vector<int> s_arr(m);

          for(int x = 0; x < m; x++)
          {
                    cin >> s_arr[x];
          }

          cin >> i;

          // inserting every value of s_arr one by one;
          for(int x = 0; x < m; x++)
          {
                    arr.insert(arr.begin() + i + x, s_arr[x]);
          }

          for(const auto a: arr)
          {
                    cout << a << " ";
          }

          return 0;
}