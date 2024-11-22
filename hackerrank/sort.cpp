#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cin >> n;

          int arr[n];

          for(int x = 0; x < n; x++)
          {
                    cin >> arr[x];
          }

          sort(arr, arr + n);

          for(int x = 0; x < n; x++)
          {
                    cout << arr[x] << " ";
          }

          sort(arr, arr + n, greater<int>());

          cout << endl;

          for(int x = 0; x < n; x++)
          {
                    cout << arr[x] << " ";
          }
          return 0;
}