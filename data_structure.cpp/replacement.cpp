#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cin >> n;

          vector <int> arr;

          for(int x = 0; x < n; x++)
          {
                    int y;
                    cin >> y;
                    arr.push_back(y);
          }

          for(int x = 0; x < n; x++)
          {
                    if(arr[x] > 0)
                    {
                              arr[x] = 1;
                    }
                    else if(arr[x] < 0)
                    {
                              arr[x] = 2;
                    }
                    else
                    {
                              arr[x] = 0;
                    }
          }

          for(const auto a : arr)
          {
                    cout << a << " ";
          }

          return 0;
}