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

                    int arr[n];
                    for(int y = 0; y < n; y++)
                    {
                              cin >> arr[y];
                    }

                    // TODO
                    int steps = 0;

                    // if(n % 2 != 0)
                    // {
                    //           cout << steps - 1 << endl;
                    //           break;
                    // }

                    int odd = 0;
                    int even = 0;
                    

                    for(int z = 0; z < n; z++) 
                    {
                              if(arr[z] % 2 == 0)
                              {
                                        even++;
                              }
                              else
                              {
                                        odd++;
                              }
                    }

                    if(even == odd)
                    {
                          cout << steps << endl;    
                    }
                    else
                    {
                              for(int z = 0; z < n / 2; z++)
                              {
                                        arr[z]++;
                              }
                              
                              cout << n / 2 << endl;
                    }
          }
          return 0;
}