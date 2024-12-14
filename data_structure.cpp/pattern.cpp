#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cin >> n;

          int l = 0;
          int r = n - 1;

          if (n == 1)
          {
                    cout << "X" << endl;
                    return 0;
          }

          for (int x = 0; x < n; x++)
          {
                    for (int y = 0; y < n; y++)
                    {
                              if (y == l && y == r)
                              {
                                        cout << "X";
                              }
                              else if (y == r)
                              {
                                        cout << "/";
                              }
                              else if(y == l)
                              {
                                        cout << "\\";
                              }
                              else
                              {
                                        cout << " ";
                              }
                    }
                    cout << endl;
                    l++;
                    r--;
          }
          return 0;
}