#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int t;
          cin >> t;

          while (t--)
          {
                    int n;
                    cin >> n;
                    vector<int> h(n);
                    for (int i = 0; i < n; i++)
                    {
                              int height;
                              cin >> height;
                              h[i] = height;
                    }

                    if (h.size() < 2)
                    {
                              cout << -1 << " " << -1 << endl;
                    }

                    int first = INT_MIN, second = INT_MIN;
                    int firstIndex = -1, secondIndex = -1;

                    for (int i = 0; i < n; i++)
                    {
                              if (h[i] > first)
                              {
                                        second = first;
                                        secondIndex = firstIndex;
                                        first = h[i];
                                        firstIndex = i;
                              }
                              else if (h[i] > second)
                              {
                                        second = h[i];
                                        secondIndex = i;
                              }
                    }

                    vector<int> v;
                    v.push_back(firstIndex);
                    v.push_back(secondIndex);
                    sort(v.begin(), v.end());
                    cout << v[0]  << " " << v[1]  << endl;
          }
          return 0;
}