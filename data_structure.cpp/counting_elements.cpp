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

          int counter = 0;
          for(int x = 0; x < n; x++)
          {
                    int temp = arr[x] + 1;
                    int flag = 1;
                    for(int y = 0; y < n; y++)
                    {
                              if(arr[y] == temp)
                              {         
                                        if(flag) counter++;
                                        flag = 0;
                              }
                    }
          }

          cout << counter << endl;
          return 0;
}