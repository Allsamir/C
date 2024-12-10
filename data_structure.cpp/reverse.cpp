#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cin >> n;

          vector <int> arr(n);

          for(int x = 0; x < n; x++)
          {
                    cin >> arr[x];
          }

          reverse(arr.begin(), arr.end());

          for(const auto a : arr)
          {
                    cout << a << " ";
          }
          return 0;
}