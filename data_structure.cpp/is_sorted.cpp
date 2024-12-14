#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int t;
          cin >> t;

          for(int x = 0; x < t; x++)
          {
                    int n;
                    cin >> n;

                    vector<int> arr(n);
                    for(int y = 0; y < n; y++)
                    {
                              cin >> arr[y];
                    }

                    // checking 
                    int flag = 0;
                    for(int z = 1; z < n; z++)
                    {
                              if(arr[z] < arr[z - 1])
                              {
                                        cout << "NO" << endl;
                                        flag = 1;
                                        break;
                              }
                    }

                    if(!flag)
                              cout << "YES" << endl;
          }
          return 0;
}