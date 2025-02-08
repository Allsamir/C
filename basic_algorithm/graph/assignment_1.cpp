#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          // take the graph input as adjacency list as directed graph
          int n, e;
          cin >> n >> e;

          vector<int> adj[n + 1];

          while (e--)
          {
                    int a, b;
                    cin >> a >> b;
                    adj[a].push_back(b);
          }

          int q;
          cin >> q;

          while (q--)
          {
                    int x, y;
                    cin >> x >> y;
                    bool flag = false;

                    if (x == y)
                    {
                              cout << "YES" << endl;
                              continue;
                    }

                    for (auto child : adj[x])
                    {
                              if (child == y)
                              {
                                        cout << "YES" << endl;
                                        flag = true;
                                        break;
                              }
                    }

                    if(!flag)
                      cout << "NO" << endl;
          }
          return 0;
}