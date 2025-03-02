#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n, e;
          cin >> n >> e;

          long long int ad_matrix[n + 1][n + 1];

          for (int x = 1; x <= n; x++)
          {
                    for (int y = 1; y <= n; y++)
                    {
                              if (x == y)
                              {
                                        ad_matrix[x][y] = 0;
                              }
                              else
                              {
                                        ad_matrix[x][y] = LLONG_MAX;
                              }
                    }
          }

          while (e--)
          {
                    long long int v, u, w;
                    cin >> v >> u >> w;
                    ad_matrix[v][u] = min(ad_matrix[v][u], w);
                    // ad_matrix[u][v] = w;
          }

          for (int k = 1; k <= n; k++)
          {
                    for (int i = 1; i <= n; i++)
                    {
                              for (int j = 1; j <= n; j++)
                              {
                                        if (ad_matrix[i][k] != LLONG_MAX && ad_matrix[k][j] != LLONG_MAX && ad_matrix[i][k] + ad_matrix[k][j] < ad_matrix[i][j])
                                        {
                                                  ad_matrix[i][j] = ad_matrix[i][k] + ad_matrix[k][j];
                                        }
                              }
                    }
          }

          // for (int x = 1; x <= n; x++)
          // {
          //           if (ad_matrix[x][x] < 0)
          //           {
          //                     cycle = true;
          //                     break;
          //           }
          // }

          int test_case;
          cin >> test_case;

          while (test_case--)
          {
                    int src, dest;
                    cin >> src >> dest;

                    if (ad_matrix[src][dest] == LLONG_MAX)
                    {
                              cout << -1 << endl;
                    }
                    else
                    {
                              cout << ad_matrix[src][dest] << endl;
                    }
          }

          return 0;
}