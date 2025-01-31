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

          for(int x = 0; x < n; x++)
          {
                    for(int j = 0; j < n; j++)
                    {
                              if(arr[x] < arr[j])
                              {
                                        swap(arr[x], arr[j]);
                              }
                    }
          }

          for(int x = 0; x < n; x++)
          {
                    cout << arr[x] <<  " ";
          }
          return 0;
}
