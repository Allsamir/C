#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n, q;
          cin >> n >> q;

          vector<int> arr(n + 1);

          for (int x = 1; x <= n; x++)
          {
                    cin >> arr[x];
          }

          sort(arr.begin(), arr.end());

          for (int x = 0; x < q; x++)
          {
                    int a;
                    cin >> a;

                    int l = 1;
                    int r = arr.size();

                    int flag = 0;

                    // binary search algorithm

                    for (int y = 1; y < n; y *= 2)
                    {
                              int middle = (l + r) / 2;

                              if (arr[middle] == a)
                              {
                                        cout << "found" << endl;
                                        flag = 1;
                                        break;
                              }
                              else if (a > arr[middle])
                              {
                                        l = middle + 1;
                              }
                              else if (a < arr[middle])
                              {
                                        r = middle - 1;
                              }
                    }

                    if(!flag) cout << "not found" << endl;
          }
          return 0;
}