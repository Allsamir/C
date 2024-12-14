#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cin >> n;

          vector<long long int> arr(n);

          for(int x = 0; x < n; x++)
          {
                    cin >> arr[x];
          }

          sort(arr.begin(), arr.end());

          for(int x = 1; x < n; x++)
          {
                    if(arr[x] == arr[x - 1])
                    {
                              cout << "YES" << endl;
                              return 0;
                    }
          }

          cout << "NO" << endl;

          return 0;
}