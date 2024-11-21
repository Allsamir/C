#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          // taking inputs

          int t;
          cin >> t;

          for (int y = 0; y < t; y++)
          {
                    int n;
                    cin >> n;

                    int arr[n];

                    for (int i = 0; i < n; i++)
                    {
                              cin >> arr[i];
                    }

                    vector<int> result;
                    // sloving the problem
                    for (int i = 1; i < n; i++)
                    {
                              for (int j = i + 1; j <= n; j++)
                              {

                                        int x = arr[i - 1] + arr[j - 1] + j - i;
                                        result.push_back(x);
                              }
                    }

                    // for (const auto &value : result)
                    // {
                    //           cout << value << " ";
                    // }

                    int min_value = *min_element(result.begin(), result.end());

                    cout << min_value << endl;
          }

          return 0;
}